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
//哈希表的创建

int hash_insert(hash *HT, datatype key);
//哈希表插入

linklist hash_search(hash *HT, datatype key);
//查找

#endif
