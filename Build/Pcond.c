#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

pthread_cond_t hastaxi = PTHREAD_COND_INITIALIZER;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

typedef struct car {
    int num;
    struct car *next;
} a, *p;

p H = NULL;

void *taxi(void *arg) {
    printf("taxi arrived\n");
    pthread_detach(pthread_self());
    p tx;
    int i = 1;
    while (1) {
        if ((tx = (p) malloc(sizeof(a))) == NULL) {
            perror("");
            return NULL;
        }
        tx->num = i++;
        printf("%d is coming\n", tx->num);
        pthread_mutex_lock(&lock);
        tx->next = H;
        H = tx;
        pthread_cond_signal(&hastaxi);
        pthread_mutex_unlock(&lock);
        sleep(1);
    }
    pthread_exit(0);
}

void *take(void *arg) {
    printf("take taxi\n");
    pthread_detach(pthread_self());
    p tx;
    while (1) {
        pthread_mutex_lock(&lock);
        while (!H)
            pthread_cond_wait(&hastaxi, &lock);
        tx = H;
        H = tx->next;
        printf("take %d taxi\n", tx->num);
        free(tx);
        pthread_mutex_unlock(&lock);
    }
    pthread_exit(0);
}

int main(int argc, const char *argv[]) {
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, taxi, NULL);
    pthread_create(&tid2, NULL, take, NULL);
    while (1)
        sleep(1);
    return 0;
}
