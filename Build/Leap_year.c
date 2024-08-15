#include "stdio.h"
#include "stdlib.h"
int main() {
    int i,a=0;
    for(i=2000;i<=3000;i++)
    {
        if(((i%4==0) && (i%100!=0)) || (i%400==0))
        {
            printf("%d ",i);
            a++;
        }
    }
    printf("\n¹²%d¸öÈòÄê\n",a);
    system("pause");
    return 0;
}
