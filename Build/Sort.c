#include "stdio.h"
#include "stdlib.h"

int main() {//简单选择排序法
    int a[10], i = 0, j, tmp;
    printf("输入十个数:");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}



/*int main(int argc, char *argv[]) {    //冒泡排序
    int a[]={3,5,8,3,8,43,7,4,8,4,78,3,79,34,34,53,5,34,53,45};
    int n= sizeof(a)/ sizeof(int);
    int tmp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
    return 0;
}*/







/*int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    if(a<c)
    {
        int tmp=a;
        a=c;
        c=tmp;
    }
    if (a<d)
    {
        int tmp=a;
        a=d;
        d=tmp;
    }
    if(b<c)
    {
        int tmp=b;
        b=c;
        c=tmp;
    }
    if(b<d)
    {
        int tmp=b;
        b=d;
        d=tmp;
    }
    if(c<d)
    {
        int tmp=c;
        c=d;
        d=tmp;
    }
    printf("%d %d %d %d\n",a,b,c,d);
    system("pause");
    return 0;
}*/






//#include<stdio.h>
//#include "stdlib.h"
//int main() {
//    int a, b, c, d, e, f, g, h, i, j, m, n, max, min;
//    printf("请输入需要排序的四个数：");
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    if (a > b) e = a, f = b; else e = b, f = a;
//    if (c > d) g = c, h = d; else g = d, h = c;
//    if (e > g) max = e, i = g; else max = g, i = e;
//    if (f > h) min = h, j = f; else min = f, j = h;
//    if (i > j) m = i, n = j; else m = j, n = i;
//    printf("这四个数从大到小排序为：%d %d %d %d\n", max, m, n, min);
//    system("pause");
//    return 0;
//}
