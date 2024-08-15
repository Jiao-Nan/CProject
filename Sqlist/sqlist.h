#ifndef CPROJECT_SQLIST_H
#define CPROJECT_SQLIST_H

typedef int data_t;
#define N 100

typedef struct {
    data_t data[N];
    int last;
} sqlist, *sqlink;

sqlink list_create();
//����һ���յ����Ա�

int list_clear(sqlink L);
//������Ա�

int list_empty(sqlink L);
//�ж����Ա��Ƿ�Ϊ��

int list_length(sqlink L);
//�������Ա�ĳ���

int list_locate(sqlink L, data_t value);
//��λԪ�������Ա��е�λ��

int list_insert(sqlink L, data_t value, int pos);
//����Ԫ��

int list_show(sqlink L);
//��ӡ���Ա�

int list_free(sqlink L);
//�ͷ����Ա�

int list_delete(sqlink L, int pos);
//ɾ�����Ա���ĳһλԪ��

int list_union(sqlink L1, sqlink L2);
//���Ա��󲢼�

int list_sort(sqlink L);
//���Ա�����

int list_delete_repeat(sqlink L);
//ɾ���ظ�Ԫ��

#endif
