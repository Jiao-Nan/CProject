#include "stdio.h"
int  main()
{
    char a='q';
    char*p=&a;
    *p='6';
    printf("%c\n",*p);
    return 0;
}
