#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main()
{
    char a[20];
    system("shutdown -s -t 120");
    q:
    printf("你的电脑将在一分钟内关机，输入：wjyyds 取消\n请输入：");
    scanf("%s",a);
    if(strcmp(a,"wjyyds")==0)
    {
        system("shutdown -a");
        printf("关机已取消\n");
    }
    else goto q;
    system("pause");
    return 0;
}
