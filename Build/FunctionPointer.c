#include <stdio.h>
#include <stdlib.h>
typedef void (*p)(void);  //�����˺���ָ��p��ָ�򷵻�ֵΪvoid������ֵΪvoid�ĺ���

void fun(void){
    printf("goodboy\n");
}

int main() {
    p q=fun;
    q();
    system("pause");
    return 0;
}
