#include "stdio.h"

int main() {
    int a = 0;
    while (a < 10) {
        a++;
        if (a == 5)
            continue;//continue表示跳过本次循环后面的代码
        printf("%d ", a);
    }
    return 0;
}
