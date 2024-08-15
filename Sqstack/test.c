#include "sqstack.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    sqstack *s;
    s = stack_create(100);
    if (s == NULL)
        return -1;
    stack_push(s, 1);
    stack_push(s, 3);
    stack_push(s, 5);
    stack_push(s, 7);
    while (!stack_empty(s))
        printf("%d ", stack_pop(s));
    puts("");
    stack_free(s);
    system("pause");
    return 0;
}
