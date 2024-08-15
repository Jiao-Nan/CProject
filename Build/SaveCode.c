#include "stdio.h"

int main() {
    signed char a = -1;
    unsigned char b = (unsigned char) -1;
    int va = (int) a;
    int vb = (int) b;
    printf("va=%d\nvb=%d\n", va, vb);
}//二进制在内存中的表示方式


//srand((unsigned int) time(NULL));//随机数发生器的初始化函数。time(NULL)返回当前的系统时间。unsigned int将返回系统的时间转换为无符号整数类型
//int x = rand();//生成随机数，需要用srand()来初始化随机数生成器
