#include "stdio.h"
#include "stdlib.h"

int main() {
    printf("输入一个星期数:");
    char input[10];
    fgets(input, sizeof(input), stdin);

    char *p;
    long int day = strtol(input, &p, 10);

    if (*p != '\0' && *p != '\n') {
        printf("输入无效，无法转换成整数.\n");
        return 1;
    }
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("weekday");
            break;
        case 6:
        case 7:
            printf("weekend");
            break;
        default:
            printf("没有");
    }
    return 0;
}
