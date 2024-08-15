#include <stdio.h>
#include <stdlib.h>
typedef void (*p)(void);  //定义了函数指针p，指向返回值为void，参数值为void的函数

void fun(void){
    printf("goodboy\n");
}

int main() {
    p q=fun;
    q();
    system("pause");
    return 0;
}
