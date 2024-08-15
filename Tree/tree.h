#ifndef CPROJECT_TREE_H
#define CPROJECT_TREE_H

typedef char data_t;

typedef struct node_t
{
    data_t data;
    struct node_t * left;
    struct node_t * right;
}bitree;

bitree * tree_create();
//创建树

void preorder(bitree *r);
//先序遍历

void inorder(bitree *r);
//中序遍历

void postorder(bitree *r);
//后序遍历

void layerorder(bitree *r);
//层次遍历

#endif
