#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lon(char *p) {
    return *p != '\0' ? 1 + lon(p + 1) : 0;  //µ›πÈ µœ÷strlen
}

int main() {
    int a = 5;
    char *p = "wjyyds1234";
    printf("%%d %d \\n", a);
    printf("%d\n", lon(p));
    printf("%lld\n", strlen("abide"));
    printf("%lld\n", strlen("c:\test\328\test.c"));
    system("pause");
    return 0;
}
