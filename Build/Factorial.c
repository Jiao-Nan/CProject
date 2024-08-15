#include <stdio.h>

int main() {
    int n = 0, i;
    long long int b = 1;
    printf("输入一个数：");
    scanf(" %d", &n);
    for (i = 2; i <= n; i++) {
        b = b * i;
    }
    printf("%d的阶乘为:%lld", n, b);
    return 0;
}
