#include "linkqueue.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    linkqueue *lq;
    lq=queue_create();
    if(lq==NULL)
    {
        printf("lq is NULL\n");
        return -1;
    }
    enqueue(lq,10);
    enqueue(lq,30);
    enqueue(lq,50);
    enqueue(lq,70);
    enqueue(lq,90);
//    while (!queue_empty(lq))
//        printf("%d ", dequeue(lq));
//    puts("");
    queue_clear(lq);
    puts("");
    queue_free(lq);
    puts("");
    system("pause");
    return 0;
}
