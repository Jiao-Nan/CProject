#include<stdio.h>

int main() {
    int a = 0;
    printf("你要好好学习吗???(1/0)\n");
    scanf("%d", &a);
    if (a == 1)
        printf("加油王杰，拿到好offer！");
    else
        printf("碌碌无为过一生");
    return 0;
}
