#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>

int test()
{
    linklist x, y;
    int value;
    x = list_create();
    if (x == NULL)
        return -1;
    while (1) {
        printf("input:");
        scanf("%d", &value);
        if (value == -1)
            break;
        list_tail_insert(x, value);
    }
    y = list_create();
    if (y == NULL)
        return -1;
    while (1) {
        printf("input:");
        scanf("%d", &value);
        if (value == -1)
            break;
        list_tail_insert(y, value);
    }
    list_show(x);
    list_show(y);
    list_union(x,y);
    list_sort(x);
    list_show(x);
    list_free(x);
    return 0;
}

int test_orderly_union() {
    linklist x, y;
    int value;
    x = list_create();
    if (x == NULL)
        return -1;
    while (1) {
        printf("input:");
        scanf("%d", &value);
        if (value == -1)
            break;
        list_tail_insert(x, value);
    }
    y = list_create();
    if (y == NULL)
        return -1;
    while (1) {
        printf("input:");
        scanf("%d", &value);
        if (value == -1)
            break;
        list_tail_insert(y, value);
    }
    list_show(x);
    list_show(y);
    list_orderly_union(x, y);
    list_show(x);
    list_free(x);
    list_free(y);
    return 0;
}
int test_sort()
{
    linklist H, p;
    int a = 0, value=0;
    H = list_create();
    if (H == NULL)
        return -1;
    while (1) {
        printf("input:");
        scanf("%d", &value);
        if (value == -1)
            break;
        list_tail_insert(H, value);
    }
    list_show(H);
    list_sort(H);
    list_show(H);
    list_free(H);
    return 0;
}
int main() {
//    linklist H, p;
//    int a = 0, value = 0;
//    H = list_create();
//    if (H == NULL)
//        return -1;
//    while (1) {
//        printf("input:");
//        scanf("%d", &value);
//        if (value == -1)
//            break;
//        list_tail_insert(H, value);
//    }
//    list_show(H);
//    p = list_get(H, 1);
//    if (p)
//        printf("%d\n", p->data);
//    list_delete(H, 0);
//    list_show(H);
//    list_reverse(H);
//    list_show(H);
//    if (list_sum_max(H, &a) && list_sum_max(H, &a) != H)
//        printf("%d %d\n", list_sum_max(H, &a)->data, a);
//    list_free(H);
    test_sort();
//    test_orderly_union();
//    test();
    system("pause");
    return 0;
}
