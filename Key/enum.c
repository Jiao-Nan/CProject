#include<stdio.h>
enum Sex {
    MALE,    //ֵΪ0
    FEMALE,  //ֵΪ1
    SECRET   //ֵΪ2
};

int main() {
    enum Sex const s = FEMALE;
    //����s��ֵ�͵���1
    printf("%d",s);
    return 0;
}
