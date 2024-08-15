#ifndef CPROJECT_SQLIST_H
#define CPROJECT_SQLIST_H

typedef int data_t;
#define N 100

typedef struct {
    data_t data[N];
    int last;
} sqlist, *sqlink;

sqlink list_create();
//创建一个空的线性表

int list_clear(sqlink L);
//清空线性表

int list_empty(sqlink L);
//判断线性表是否为空

int list_length(sqlink L);
//计算线性表的长度

int list_locate(sqlink L, data_t value);
//定位元素在线性表中的位置

int list_insert(sqlink L, data_t value, int pos);
//插入元素

int list_show(sqlink L);
//打印线性表

int list_free(sqlink L);
//释放线性表

int list_delete(sqlink L, int pos);
//删除线性表中某一位元素

int list_union(sqlink L1, sqlink L2);
//线性表求并集

int list_sort(sqlink L);
//线性表排序

int list_delete_repeat(sqlink L);
//删除重复元素

#endif
