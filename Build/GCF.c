#include "stdio.h"

int main() {
    int a, b, i;
    printf("输入两个数求最大公因数：");
    scanf("%d%d", &a, &b);
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (i = a; i >= 1; i--)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                if (i == 1)
                {
                    printf("这两个数互质。\n");
                }
                if (i != 1)
                {
                    printf("最大公因数是 %d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}

//#include "stdio.h"
//#include "stdlib.h"
//int main()
// {
//    int a,b,c;
//    printf("输入两个数以求最大公因数：");
//    scanf("%d%d",&a,&b);
//    while(a%b)
//    {
//        c=a%b;
//        a=b;
//        b=c;
//    }
//    printf("这两个数的最大公因数为：%d\n",b);
//    system("pause");
//    return 0;
//}
