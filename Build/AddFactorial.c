#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,sum=0;
    int i,n;
    printf("输入一个数以求阶乘：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a*=i;
        sum+=a;
    }
    printf("%d的阶乘为：%d\n",n,a);
    printf("%d的累加阶乘为：%d\n",n,sum);
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
//    printf("请输入需要累加阶乘的数字：");
//    scanf(" %d", &x);
//    long long int m = 0, n;
//    for (i = 1; i <= x; i++) {
//        n = m + FAC(i);
//        m = n;
//    }
//    printf("%lld", m);
//    return 0;
//}



