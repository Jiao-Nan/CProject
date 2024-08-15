#include "sequeue.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    sequeue *sq;
    if ((sq = queue_create()) == NULL) {
        printf("queue create failed\n");
        return -1;
    }
    enqueue(sq, 10);
    enqueue(sq, 30);
    enqueue(sq, 50);
    enqueue(sq, 70);
    enqueue(sq, 90);
    while (!queue_empty(sq))
        printf("%d\n", dequeue(sq));
    queue_free(sq);
    system("pause");
    return 0;
}
