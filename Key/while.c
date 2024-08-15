#include<stdio.h>

int main() {
    int a = 1;
    char c;
    printf("我们在一起吧！\n");
    printf("A 好的。\n");
    printf("B 不好。\n");
    while (1) {
        scanf(" %c", &c);
        if (c == 'A')
        {
            printf("说50遍我爱你。\n");
            {
                while (a <= 50) {
                    printf("第%d遍我爱你！\n", a);
                    a++;
                }
                printf("够了，分手吧！\n");
                printf("呜呜呜呜呜呜·····\n");
                break;
            }
        }
        else if (c == 'B') {
            printf("滚！\n");
            break;
        } else { printf("只能选A或者B\n"); }
    }
    return 0;
}
