#include<stdio.h>
#include "string.h"
#include "stdlib.h"

int main() {
    const char key[] = "525goodboy";
    char a[20];
    strcpy(a, key);
    printf("%s\n", a);
    system("pause");
    return 0;
}
