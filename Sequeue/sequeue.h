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
//�����ն���

int enqueue(sequeue *sq, datatype x);
//���

datatype dequeue(sequeue *sq);
//����

int queue_empty(sequeue *sq);
//�ж��Ƿ�Ϊ�ն�

int queue_full(sequeue *sq);
//�ж��Ƿ�Ϊ����

int queue_clear(sequeue *sq);
//��ն���

sequeue *queue_free(sequeue *sq);
//�ͷŶӿռ�

#endif
