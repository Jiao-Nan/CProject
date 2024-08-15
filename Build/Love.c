#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
    system("color 0c");
    float x, y, a;
    for (y = 1.5; y > -1; y -= 0.1) {
        for (x = -1.5; x < 1.5; x += 0.05) {
            a = x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y < 0.0 ? 'x' : ' ');
        }
        Sleep(150);
        putchar('\n');
    }
    system("pause");
    return 0;
}
