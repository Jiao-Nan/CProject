#include "stdio.h"

int main() {
    int a, b, i;
    printf("���������������������");
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
                    printf("�����������ʡ�\n");
                }
                if (i != 1)
                {
                    printf("��������� %d\n", i);
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
//    printf("�����������������������");
//    scanf("%d%d",&a,&b);
//    while(a%b)
//    {
//        c=a%b;
//        a=b;
//        b=c;
//    }
//    printf("�����������������Ϊ��%d\n",b);
//    system("pause");
//    return 0;
//}
