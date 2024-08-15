#include "sqlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

sqlink list_create() {
    sqlink L;
    L = (sqlink) malloc(sizeof(sqlist));
    if (L == NULL) {
        printf("list malloc failed\n");
        return L;
    }
    memset(L, 0, sizeof(sqlist));
    L->last = -1;
    return L;
}

int list_clear(sqlink L) {
    if (L == NULL)
        return -1;
    memset(L, 0, sizeof(sqlist));
    L->last = -1;
    return 0;
}

int list_empty(sqlink L) {
    if (L == NULL)
        return -1;
    if (L->last == -1)
        return 1;
    else
        return 0;
}

int list_length(sqlink L) {
    if (L == NULL)
        return -1;
    else
        return (L->last + 1);
}

int list_locate(sqlink L, data_t value) {
    if (L == NULL)
        return -1;
    for (int i = 0; i <= L->last; i++) {
        if (value == L->data[i])
            return i;
    }
    return -1;
}

int list_insert(sqlink L, data_t value, int pos) {
    if (L == NULL)
        return -1;
    if (L->last == N - 1) {
        printf("list is full\n");
        return -1;
    }
    if (pos < 0 || pos > L->last + 1) {
        printf("pos is invalid\n");
        return -1;
    }
    for (int i = L->last; i >= pos; i--) {
        L->data[i + 1] = L->data[i];
    }
    L->data[pos] = value;
    L->last++;
    return 0;
}

int list_show(sqlink L) {
    if (L == NULL)
        return -1;
    if (L->last == -1)
        printf("list is empty\n");
    for (int i = 0; i <= L->last; i++) {
        printf("%d ", L->data[i]);
    }
    return 0;
}

int list_free(sqlink L) {
    if (L == NULL)
        return -1;
    free(L);
    L = NULL;
    return 0;
}

int list_delete(sqlink L, int pos) {
    if (L == NULL)
        return -1;
    if (L->last == -1) {
        printf("list is empty\n");
        return -1;
    }
    if (pos < 0 || pos > L->last) {
        printf("\npos is invalid\n");
        return -1;
    }
    for (int i = pos; i < L->last; i++) {
        L->data[i] = L->data[i + 1];
    }
    L->last--;
    return 0;
}

int list_union(sqlink L1, sqlink L2) {
    if (L1->last == -1 || L2->last == -1) {
        printf("one or two lists is empty\n");
        return -1;
    }
    int i = 0, j = 0;
    for (i = 0; i <= L2->last; i++) {
        for (j = 0; j <= L1->last; j++) {
            if (L2->data[i] == L1->data[j])
                break;
        }
        if (j == L1->last + 1) {
            if (L1->last == N - 1)
                return -1;
            L1->last++;
            L1->data[L1->last] = L2->data[i];
        }
    }
    return 0;
}

int list_sort(sqlink L) {
    if (L->last == -1) {
        printf("list is empty\n");
        return -1;
    }
    if (L->last == -1) {
        printf("list is empty\n");
        return -1;
    }
    for (int i = 0; i <= L->last - 1; i++) {
        for (int j = 0; j <= L->last - 1 - i; j++) {
            if (L->data[j] < L->data[j + 1]) {
                int tmp = L->data[j];
                L->data[j] = L->data[j + 1];
                L->data[j + 1] = tmp;
            }
        }
    }
    return 0;
}

int list_delete_repeat(sqlink L) {
    if (L->last == -1) {
        printf("list is empty\n");
        return -1;
    }
    for (int i = 0; i < L->last; i++) {
        for (int j = i + 1; j <= L->last; j++) {
            if (L->data[i] == L->data[j]) {
                list_delete(L, j);
                j--;
            }
        }
    }
    return 0;
}
