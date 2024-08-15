#ifndef CPROJECT_SQSTACK_H
#define CPROJECT_SQSTACK_H

typedef int data_t;

typedef struct {
    data_t *data;
    int maxlen;
    int top;
} sqstack;

sqstack *stack_create(int len);
//创建一个空栈

int stack_push(sqstack *s, data_t value);
//入栈

data_t stack_pop(sqstack *s);
//出栈

int stack_empty(sqstack *s);
//测试栈是否为空

int stack_full(sqstack *s);
//测试栈是否为满栈

data_t stack_top(sqstack *s);
//查看栈顶值

int stack_clear(sqstack *s);
//栈清空

int stack_free(sqstack *s);
//栈释放

#endif
