#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void menu() {
    printf("-------------------------------------------------\n");
    printf("------------------1.开始游戏---------------------\n");
    printf("------------------2.退出游戏---------------------\n");
    printf("-------------------------------------------------\n");
}

void game() {
    int x = rand();//生成随机数，需要用srand()来初始化随机数生成器
    int y = x % 100 - 1;//任何数字对n取模，结果都是0~n-1
    int z;
    printf("猜1~100的数字\n");
    printf("猜猜看我生成的是什么数：\n");
    while (1) {
        scanf("%d", &z);
        if (z < y) {
            printf("猜小啦\n");
        } else if (z > y) {
            printf("猜大啦\n");
        } else {
            printf("猜对啦\n");
            break;
        }

    }

}

int main() {
    int a;
    srand((unsigned int) time(NULL));//随机数发生器的初始化函数。time(NULL)返回当前的系统时间。unsigned int将返回系统的时间转换为无符号整数类型
    while (1) {
        menu();
        printf("请输入：");
        scanf("%d", &a);
        if (a == 1) {
            game();
            continue;
        } else if (a == 2) {
            printf("游戏结束！\n");
            break;
        } else {
            printf("输入错误。\n");
            continue;
        }
    }
    //system("pause");
    return 0;
}
