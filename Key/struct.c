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
    strcpy(wj.st.nationality,"��");
    strcpy(wj.st.name,"����");
    strcpy(wj.st.sex,"��");
    wj.st.age=23;
    wj.score=100;
    wj.number=27;
    printf("������%s\n�Ա�%s\n���壺%s\n���䣺%d\nѧ�ţ�%d\n�÷�:%d\n\n",wj.st.name,wj.st.sex,wj.st.nationality,wj.st.age,wj.number,wj.score);
    struct teacher hyf;
    struct teacher *p=&hyf;
    strcpy(p->te.nationality,"��");
    strcpy(p->te.name,"���");
    strcpy(p->te.sex,"Ů");
    p->te.age=29;
    strcpy(p->phone,"18875639967");
    printf("������%s\n�Ա�%s\n���壺%s\n���䣺%d\n�ֻ���%s\n",p->te.name,p->te.sex,p->te.nationality,p->te.age,p->phone);
    system("pause");
    return 0;
}*/


struct BOOK {
    char NAME[30];
    short PRICE;
    char AUTHOR[30];
} book1 = {.NAME = "���μ�", .AUTHOR = "��ж�"}, book2;

int main() {
    struct BOOK book = {"�������������ɵ�", 40, "�������˹�����˹��"};
    printf("������%s\n", book.NAME);
    printf("�۸�%d\n", book.PRICE);
    printf("���ߣ�%s\n", book.AUTHOR);
    struct BOOK *p = &book;
    printf("ͨ����ַ��ӡ��������%s\n", (*p).NAME);
    printf("ͨ����ַ��ӡ�ļ۸�%d\n", p->PRICE);
    printf("name:%s\nprice:%d\nauthor:%s", book1.NAME, book1.PRICE, book1.AUTHOR);
    return 0;
}
