#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,n;
    printf("������Ҫ�ۼӵ�����");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        a+=i;
    }
    printf("%d�ۼӵĽ���ǣ�%d\n",n,a);
    system("pause");
    return 0;
}
