#ifndef CPROJECT_LINKSTACK_H
#define CPROJECT_LINKSTACK_H

typedef int data_t;

typedef struct node {
    data_t data;
    struct node *next;
} listnode, *linkstack;

linkstack stack_creat();
//����

int stack_push(linkstack s, data_t value);
//��ջ

data_t stack_pop(linkstack s);
//��ջ

int stack_empty(linkstack s);
//�ж�ջ�Ƿ�Ϊ��

data_t stack_top(linkstack s);
//�鿴ջ��Ԫ��

linkstack stack_free(linkstack s);
//ջ���ͷ�

#endif
