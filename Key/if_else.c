#include<stdio.h>

int main() {
    int a = 0;
    printf("��Ҫ�ú�ѧϰ��???(1/0)\n");
    scanf("%d", &a);
    if (a == 1)
        printf("�������ܣ��õ���offer��");
    else
        printf("µµ��Ϊ��һ��");
    return 0;
}
