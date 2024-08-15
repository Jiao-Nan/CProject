#include "linkstack.h"
#include <stdlib.h>
#include <stdio.h>

linkstack stack_creat() {
    linkstack s;
    s = (linkstack) malloc(sizeof(listnode));
    if (s == NULL) {
        printf("malloc s failed\n");
        return NULL;
    }
    s->data = 0;
    s->next = NULL;
    return s;
}

int stack_push(linkstack s, data_t value) {
    linkstack p;
    if (s == NULL) {
        printf("s is NULL\n");
        return -1;
    }
    p = (linkstack) malloc(sizeof(listnode));
    if (p == NULL) {
        printf("malloc p failed\n");
        return -1;
    }
    p->data = value;
    p->next = s->next;
    s->next = p;
    return 0;
}

data_t stack_pop(linkstack s) {
    linkstack p;
    data_t tmp;
    p = s->next;
    s->next = p->next;
    tmp = p->data;
    free(p);
    p = NULL;
    return tmp;
}

int stack_empty(linkstack s) {
    if (s == NULL) {
        printf("s is NULL\n");
        return -1;
    }
    return (s->next == NULL ? 1 : 0);
}

data_t stack_top(linkstack s) {
    if (s == NULL) {
        printf("s is NULL\n");
        return -1;
    }
    return (s->next->data);
}

linkstack stack_free(linkstack s) {
    linkstack p;
    if (s == NULL) {
        printf("s is NULL\n");
        return NULL;
    }
    printf("free:");
    while (s) {
        p = s;
        s = s->next;
        printf("%d ", p->data);
        free(p);
    }
    return NULL;
}
