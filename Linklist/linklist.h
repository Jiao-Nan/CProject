#ifndef CPROJECT_LINKLIST_H
#define CPROJECT_LINKLIST_H

typedef int data_t;

typedef struct node {
    data_t data;
    struct node *next;
} listnode, *linklist;

linklist list_create();
//����һ��������

int list_tail_insert(linklist H, data_t value);
//β������

int list_show(linklist H);
//��ӡ����

linklist list_get(linklist H, int pos);
//��ȡλ��

int list_insert(linklist H, data_t value, int pos);
//ָ��λ�ò���

int list_delete(linklist H, int pos);
//ɾ��ĳһλ�Ľ��

linklist list_free(linklist H);
//�ͷ���������нڵ�

int list_reverse(linklist H);
//����ת

linklist list_sum_max(linklist H, data_t *value);
//���ڵĺ�������������λ��

int list_orderly_union(linklist H1, linklist H2);
//�������������ϲ�

int list_sort(linklist H);
//��������

int list_union(linklist H1,linklist H2);
//�ϲ�����

#endif
