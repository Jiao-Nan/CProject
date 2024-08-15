#ifndef CPROJECT_LINKSTACK_H
#define CPROJECT_LINKSTACK_H

typedef int data_t;

typedef struct node {
    data_t data;
    struct node *next;
} listnode, *linkstack;

linkstack stack_creat();
//创建

int stack_push(linkstack s, data_t value);
//入栈

data_t stack_pop(linkstack s);
//出栈

int stack_empty(linkstack s);
//判断栈是否为空

data_t stack_top(linkstack s);
//查看栈顶元素

linkstack stack_free(linkstack s);
//栈的释放

#endif
