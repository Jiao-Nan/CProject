#include <stdio.h>

int main() {
    int a;
    while ((a = getchar()) != EOF) {//EOF��ctrl+c��������
        putchar(a);
    }
    return 0;
}
