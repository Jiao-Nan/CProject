#include "hash.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    hash *HT;
    int i;
    int key;
    linklist r;
    int data[] = {23, 34, 14, 38, 46, 16, 68, 15, 7, 31, 26};
    if ((HT = hash_create()) == NULL) {
        printf("HT is NULL\n");
        return -1;
    }
    for (i = 0; i < sizeof(data) / sizeof(int); i++) {
        hash_insert(HT, data[i]);
    }
    printf("input num to search:");
    scanf("%d", &key);
    r = hash_search(HT, key);
    if (r == NULL) {
        printf("not found\n");
	} else {
        printf("found:%d %d\n", key, r->key);
	}
    system("pause");
    return 0;
}

