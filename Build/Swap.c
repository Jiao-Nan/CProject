#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void Swap(int* x,int* y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    Swap(&a,&b);
    printf("%d %d\n",a,b);
    system("pause");
    return 0;
}