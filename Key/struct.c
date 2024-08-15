#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

/*int main() {
    struct information
    {
        char nationality[6];
        char name[10];
        char sex[6];
        int age;
    };
    struct student
    {
        struct information st;
        int number;
        int score;
    };
    struct teacher
    {
        struct information te;
        char phone[12];
    };
    struct student wj;
    strcpy(wj.st.nationality,"汉");
    strcpy(wj.st.name,"王杰");
    strcpy(wj.st.sex,"男");
    wj.st.age=23;
    wj.score=100;
    wj.number=27;
    printf("姓名：%s\n性别：%s\n民族：%s\n年龄：%d\n学号：%d\n得分:%d\n\n",wj.st.name,wj.st.sex,wj.st.nationality,wj.st.age,wj.number,wj.score);
    struct teacher hyf;
    struct teacher *p=&hyf;
    strcpy(p->te.nationality,"汉");
    strcpy(p->te.name,"何杨帆");
    strcpy(p->te.sex,"女");
    p->te.age=29;
    strcpy(p->phone,"18875639967");
    printf("姓名：%s\n性别：%s\n民族：%s\n年龄：%d\n手机：%s\n",p->te.name,p->te.sex,p->te.nationality,p->te.age,p->phone);
    system("pause");
    return 0;
}*/


struct BOOK {
    char NAME[30];
    short PRICE;
    char AUTHOR[30];
} book1 = {.NAME = "西游记", .AUTHOR = "吴承恩"}, book2;

int main() {
    struct BOOK book = {"钢铁是怎样炼成的", 40, "尼古拉奥斯特洛夫斯基"};
    printf("书名：%s\n", book.NAME);
    printf("价格：%d\n", book.PRICE);
    printf("作者：%s\n", book.AUTHOR);
    struct BOOK *p = &book;
    printf("通过地址打印的书名：%s\n", (*p).NAME);
    printf("通过地址打印的价格：%d\n", p->PRICE);
    printf("name:%s\nprice:%d\nauthor:%s", book1.NAME, book1.PRICE, book1.AUTHOR);
    return 0;
}
