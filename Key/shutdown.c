#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main()
{
    char a[20];
    system("shutdown -s -t 120");
    q:
    printf("��ĵ��Խ���һ�����ڹػ������룺wjyyds ȡ��\n�����룺");
    scanf("%s",a);
    if(strcmp(a,"wjyyds")==0)
    {
        system("shutdown -a");
        printf("�ػ���ȡ��\n");
    }
    else goto q;
    system("pause");
    return 0;
}
