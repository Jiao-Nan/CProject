#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{
    time_t t;
    t= time(NULL);
    printf("当前时间：%lld秒\n",t);
    system("pause");
    return 0;
}
