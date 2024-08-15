#ifndef CPROJECT_SQSTACK_H
#define CPROJECT_SQSTACK_H

typedef int data_t;

typedef struct {
    data_t *data;
    int maxlen;
    int top;
} sqstack;

sqstack *stack_create(int len);
//����һ����ջ

int stack_push(sqstack *s, data_t value);
//��ջ

data_t stack_pop(sqstack *s);
//��ջ

int stack_empty(sqstack *s);
//����ջ�Ƿ�Ϊ��

int stack_full(sqstack *s);
//����ջ�Ƿ�Ϊ��ջ

data_t stack_top(sqstack *s);
//�鿴ջ��ֵ

int stack_clear(sqstack *s);
//ջ���

int stack_free(sqstack *s);
//ջ�ͷ�

#endif
