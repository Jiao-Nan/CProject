#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{
    time_t t;
    t= time(NULL);
    printf("��ǰʱ�䣺%lld��\n",t);
    system("pause");
    return 0;
}
