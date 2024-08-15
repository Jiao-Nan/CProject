#ifndef CPROJECT_LINKQUEUE_H
#define CPROJECT_LINKQUEUE_H
#include "tree.h"

typedef bitree *datatype;

typedef struct node {
    datatype data;
    struct node *next;
} listnode, *linklist;

typedef struct {
    linklist front;
    linklist rear;
} linkqueue;

linkqueue *queue_create();
//创建队列

int enqueue(linkqueue *lq, datatype x);
//入队

datatype dequeue(linkqueue *lq);
//出队

int queue_empty(linkqueue *lq);
//判断队列是否为空

int queue_clear(linkqueue *lq);
//队列清空

linkqueue *queue_free(linkqueue *lq);
//队列释放
#endif
