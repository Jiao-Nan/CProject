#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int a = 0, b = 0, c = 0;
    a = printf("%d", printf("%d", printf("%d", 43)));
    printf("\n");
    printf("%d", a);
    printf("\n");
    b = printf("%d", 11);
    printf("\n%d", b);
    c = printf("\n");
    printf("%d\n", c);
    system("pause");
    return 0;
}
