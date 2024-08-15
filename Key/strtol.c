#include "stdio.h"
#include "stdlib.h"

int main() {
    printf("输入一个数:");
    char input[10];
    fgets(input, sizeof(input), stdin);

    char *p;
    const long int a = strtol(input, &p, 10);

    if (*p != '\0' && *p != '\n') {
        printf("输入无效，无法转换成整数.\n");
        return 1;
    }
    printf("这个数值是:%ld", a);
}
