#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main() {
    char key[10] = "525goodboy";
    char enter[100];
    for (int i = 0; i < 3; i++) {
        printf("请输入密码：");
        scanf(" %s", enter);
        if (strcmp(enter, key) == 0)
        {
            printf("登录成功！\n");
            break;
        }
        else if (i < 2)
            printf("密码错误，你还有%d次机会\n", 2 - i);
        else
            printf("你已被锁定！\n");
    }
    system("pause");
    return 0;
}
