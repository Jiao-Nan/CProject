#include "stdio.h"

int main() {
    int a = 0;
    while (a < 10) {
        a++;
        if (a == 5)
            continue;//continue��ʾ��������ѭ������Ĵ���
        printf("%d ", a);
    }
    return 0;
}
