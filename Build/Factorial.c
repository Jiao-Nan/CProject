#include <stdio.h>

int main() {
    int n = 0, i;
    long long int b = 1;
    printf("����һ������");
    scanf(" %d", &n);
    for (i = 2; i <= n; i++) {
        b = b * i;
    }
    printf("%d�Ľ׳�Ϊ:%lld", n, b);
    return 0;
}
