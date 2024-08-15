#ifndef CPROJECT_HASH_H
#define CPROJECT_HASH_H

#define N 15
typedef int datatype;

typedef struct node {
    datatype key;
    datatype value;
    struct node *next;
} listnode, *linklist;

typedef struct {
    listnode data[N];
} hash;

hash *hash_create();
//��ϣ��Ĵ���

int hash_insert(hash *HT, datatype key);
//��ϣ�����

linklist hash_search(hash *HT, datatype key);
//����

#endif
