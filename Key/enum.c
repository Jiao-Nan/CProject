#include<stdio.h>
enum Sex {
    MALE,    //值为0
    FEMALE,  //值为1
    SECRET   //值为2
};

int main() {
    enum Sex const s = FEMALE;
    //这里s的值就等于1
    printf("%d",s);
    return 0;
}
