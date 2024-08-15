#include "stdio.h"
//#include "windows.h"
#include "stdlib.h"
#include "synchapi.h"

int main() {
    char a[] = "WangJie love you Forever!";
    char b[] = "*************************";
    int left = 0;
    int right = (sizeof(a) / sizeof(a[0])) - 2;
    while (left <= right) {
        b[left] = a[left];
        b[right] = a[right];
        printf("%s\n", b);
        Sleep(300);
        system("cls");
        left++;
        right--;
    }
    printf("%s\n", b);
    system("pause");
    return 0;
}
