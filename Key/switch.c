#include "stdio.h"
#include "stdlib.h"

int main() {
    printf("����һ��������:");
    char input[10];
    fgets(input, sizeof(input), stdin);

    char *p;
    long int day = strtol(input, &p, 10);

    if (*p != '\0' && *p != '\n') {
        printf("������Ч���޷�ת��������.\n");
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
            printf("û��");
    }
    return 0;
}
