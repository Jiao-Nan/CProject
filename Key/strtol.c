#include "stdio.h"
#include "stdlib.h"

int main() {
    printf("����һ����:");
    char input[10];
    fgets(input, sizeof(input), stdin);

    char *p;
    const long int a = strtol(input, &p, 10);

    if (*p != '\0' && *p != '\n') {
        printf("������Ч���޷�ת��������.\n");
        return 1;
    }
    printf("�����ֵ��:%ld", a);
}
