#ifndef CPROJECT_LINKLIST_H
#define CPROJECT_LINKLIST_H

typedef int data_t;

typedef struct node {
    data_t data;
    struct node *next;
} listnode, *linklist;

linklist list_create();
//创建一个空链表

int list_tail_insert(linklist H, data_t value);
//尾部插入

int list_show(linklist H);
//打印链表

linklist list_get(linklist H, int pos);
//获取位置

int list_insert(linklist H, data_t value, int pos);
//指定位置插入

int list_delete(linklist H, int pos);
//删除某一位的结点

linklist list_free(linklist H);
//释放链表的所有节点

int list_reverse(linklist H);
//链表反转

linklist list_sum_max(linklist H, data_t *value);
//相邻的和最大的两个结点的位置

int list_orderly_union(linklist H1, linklist H2);
//两个链表的有序合并

int list_sort(linklist H);
//链表排序

int list_union(linklist H1,linklist H2);
//合并链表

#endif
