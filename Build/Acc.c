#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,n;
    printf("请输入要累加的数：");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        a+=i;
    }
    printf("%d累加的结果是：%d\n",n,a);
    system("pause");
    return 0;
}
