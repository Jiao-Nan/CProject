#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,sum=0;
    int i,n;
    printf("����һ��������׳ˣ�");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a*=i;
        sum+=a;
    }
    printf("%d�Ľ׳�Ϊ��%d\n",n,a);
    printf("%d���ۼӽ׳�Ϊ��%d\n",n,sum);
    system("pause");
    return 0;
}

//#include "stdio.h"
//
//long long int FAC(int n) {
//    long long int a;
//    long long int b = 1;
//    for (int i = 2; i <= n; i++) {
//        a = b * i;
//        b = a;
//    }
//    return b;
//}
//
//int main() {
//    int i, x;
//    printf("��������Ҫ�ۼӽ׳˵����֣�");
//    scanf(" %d", &x);
//    long long int m = 0, n;
//    for (i = 1; i <= x; i++) {
//        n = m + FAC(i);
//        m = n;
//    }
//    printf("%lld", m);
//    return 0;
//}



