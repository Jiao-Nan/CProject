#include <stdio.h>

int main() {
    int a;
    while ((a = getchar()) != EOF) {//EOF用ctrl+c结束进程
        putchar(a);
    }
    return 0;
}
