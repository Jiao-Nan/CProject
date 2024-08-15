#include "sqlist.h"
#include <stdio.h>
#include <stdlib.h>

void list_insert_test() {
    sqlink L;
    L = list_create();
    if (L == NULL)
        return;
    list_insert(L, 10, 0);
    list_insert(L, 20, 0);
    list_insert(L, 30, 1);
    list_insert(L, 40, 0);
    list_insert(L, 50, 0);
    list_insert(L, 60, 0);
    list_insert(L, 70, 0);
    list_insert(L, 80, 0);
    list_show(L);
    list_sort(L);
    puts("");
    list_show(L);
    list_free(L);
}

void list_delete_test() {
    sqlink L;
    L = list_create();
    if (L == NULL)
        return;
    list_insert(L, 10, 0);
    list_insert(L, 20, 0);
    list_insert(L, 30, 1);
    list_insert(L, 40, 0);
    list_insert(L, 50, 0);
    list_insert(L, 60, 0);
    list_insert(L, 70, 0);
    list_insert(L, 80, 0);
    list_show(L);
    puts("");
    list_delete(L, 2);
    list_show(L);
    list_free(L);
}

void list_test()
{
    sqlink L;
    L = list_create();
    if (L == NULL)
        return;
    list_insert(L, 1, 0);
    list_insert(L, 1, 0);
    list_insert(L, 1, 0);
    list_insert(L, 2, 0);
    list_insert(L, 3, 0);
    list_insert(L, 4, 0);
    list_insert(L, 4, 0);
    list_insert(L, 5, 0);
    list_insert(L, 6, 0);
    list_show(L);
    puts("");
    list_delete_repeat(L);
    list_show(L);
    puts("");
    list_free(L);
}

int main() {
    list_test();
    system("pause");
    return 0;
}
