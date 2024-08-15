#include "linkstack.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    linkstack s;
    s = stack_creat();
    if (s == NULL) {
        printf("s is NULL\n");
        return -1;
    }
    stack_push(s, 10);
    stack_push(s, 20);
    stack_push(s, 30);
    stack_push(s, 40);
    stack_push(s, 50);
    while (!stack_empty(s))
        printf("%d ", stack_pop(s));
    s = stack_free(s);
    puts("");
    system("pause");
    return 0;
}
