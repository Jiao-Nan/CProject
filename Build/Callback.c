#include <stdio.h>
#include <stdlib.h>

void print_normal(int i) {
    printf("%d ", i);
}

void print_sub2(int i) {
    printf("%d ", i - 2);
}

void print_sub3(int i) {
    printf("%d ", i - 3);
}

void print_all(int *a, void (*p)(int)) {
    for (int i = 0; i < 5; i++) {
        (*p)(*(a + i));
    }
    puts("");
}

int main() {
    int a[5] = {6, 7, 8, 9, 10};
    print_all(a, print_sub2);

    system("pause");
    return 0;
}
