#include<stdio.h>
#include "string.h"
#include "stdlib.h"
int main()
{
    char a[]="Hello World!";
    memset(a,'#',5);
    printf("%s\n",a);
    system("pause");
    return 0;
}
