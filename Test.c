/* in sem_r */

#include <semaphore.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

void del_sem(int sig){
    if(sem_unlink("mysem_r") < 0) {    /* 接收SIGINT信号后删除信号灯，否则下次执行失败 */
        printf("\nUnlink sem failed\n");
        exit(-1);
    }
    printf("\n");
    exit(0);
}

int main(int argc, const char *argv[]) {
    int id;
    key_t key;
    void *addr;
    sem_t *sem_w, *sem_r;

    struct sigaction act = {
        .sa_handler = del_sem,
        .sa_flags = 0,
    };

    if(sigemptyset(&act.sa_mask) < 0) {
        printf("Empty signal set failed\n");
        return -1;
    }

    if(sigaction(SIGINT, &act, NULL) < 0) {
        printf("Get signal failed\n");
        return -1;
    }

    if((key = ftok("./myFile", 111)) < 0) {
        printf("Get IPC key failed\n");
        return -1;
    }

    if((id = shmget(key, 200, IPC_CREAT|0666)) < 0) {
        printf("Get memery id failed\n");
        return -1;
    }

    if((addr = shmat(id, NULL, 0)) < 0) {
        printf("Mapping failed\n");
        return -1;
    }

    sem_w = sem_open("mysem_w", O_CREAT|O_RDWR, 0666, 1);
    sem_r = sem_open("mysem_r", O_CREAT|O_RDWR, 0666, 0);

    while(1){
        if(sem_wait(sem_r) < 0) {
            printf("Apply failed\n");
            return -1;
        }
        printf("%s", (char *)addr);
        if(sem_post(sem_w) < 0) {
            printf("Release failed\n");
            return -1;
        }
    }
    return 0;
}
