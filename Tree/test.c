#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    bitree *r;
    if((r=tree_create())==NULL)
        return -1;
    preorder(r);
    puts("");
    inorder(r);
    puts("");
    postorder(r);
    puts("");
    layerorder(r);
    puts("");
    system("pause");
    return 0;
}
//AB#CD###E#FGH##K###
//A#BCEH###FI##J##D#GK###
