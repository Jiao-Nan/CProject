#include <stdio.h>
#include <stdlib.h>

int compare(const void *p, const void *q) {
    return (*(int *)p - *(int *)q);
}

int main() {
    int a[] = {2, 5, 2, 6, 3, 8, 6, 4, 8, 4, 9};
    const int n = sizeof(a) / sizeof(a[0]);
    qsort(a, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    system("pause");
    return 0;
}
