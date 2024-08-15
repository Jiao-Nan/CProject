#include<stdio.h>

int main() {
    char a[10];
    int b, c;
    scanf("%s", a);
    printf("hi %s\n", a);
    while ((c = getchar()) != '\n') {
        ;
    }
    b = getchar();
    if (b == '\n')
        printf("aaa");
    else
        printf("bbb");
    return 0;
}
