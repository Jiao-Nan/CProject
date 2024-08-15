#include<stdio.h>

int Add(int x, int y) {
    int z = x + y;
    return z;
}

int main() {
    int a = 3, b = 4;
    int c = Add(a, b);
    printf("%d", c);
}
