#include "stdio.h"
#include "stdlib.h"

int main() {
    int a[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    int left = 0;
    int right =(sizeof(a) / sizeof(a[0]))-1;
    printf("����ҪѰ�ҵ�����");
    scanf(" %d",&key);
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (key < a[mid])
        {
            right = mid - 1;
        } else if (key > a[mid]) {
            left = mid + 1;
        }
        else
        {
            printf("�ҵ��ˣ��±�Ϊ:%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("û�ҵ���");
    }
    system("pause");
    return 0;
}
