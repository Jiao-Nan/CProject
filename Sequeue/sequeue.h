#ifndef CPROJECT_SEQUEUE_H
#define CPROJECT_SEQUEUE_H

typedef int datatype;
#define N 128

typedef struct {
    datatype data[N];
    int front;
    int rear;
} sequeue;

sequeue *queue_create();
//创建空队列

int enqueue(sequeue *sq, datatype x);
//入队

datatype dequeue(sequeue *sq);
//出队

int queue_empty(sequeue *sq);
//判断是否为空队

int queue_full(sequeue *sq);
//判断是否为满队

int queue_clear(sequeue *sq);
//清空队列

sequeue *queue_free(sequeue *sq);
//释放队空间

#endif
