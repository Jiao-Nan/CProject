#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

int main() {
    int n, a = 1, b;
    int i = 0, j = 0;
    char arr[20];
    printf("请输入一个10进制数以转换16进制：");
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    }
    while (1) {
        a = n % 16;
        n = n / 16;
        if (a == 10) {
            arr[i] = 'A';
        } else if (a == 11) {
            arr[i] = 'B';
        } else if (a == 12) {
            arr[i] = 'C';
        } else if (a == 13) {
            arr[i] = 'D';
        } else if (a == 14) {
            arr[i] = 'E';
        } else if (a == 15) {
            arr[i] = 'F';
        } else {
            arr[i] = '0' + a;
        }
        if (n == 0) {
            break;
        }
        i++;
    }
    for (j = i; j >= 0; j--) {
        printf("%c", arr[j]);
    }
    printf("\n");
    system("pause");
    return 0;
}
