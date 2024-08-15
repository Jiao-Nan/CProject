//图书信息的添加、图书信息的打印、图书信息的查询、图书信息的修改、图书信息的删除。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char admin_name[20]="administrator";
char admin_key[20]="525goodboy";


char reader_name[20]={"wj"};
char reader_key[20]={"wj"};

char cmp[20]={0};

void reader();
void administrator();
void log_in();
void sign_in();
void show();
void reader_get();
void admin_get();
void search_book();
void borrow_book();
void return_book();
void add_book();
void edit_book();
void delete_book();



typedef struct
{
    int serial_num;
    char name[20];
    char author[20];
    int num;
}book,*bookp;
book b1={0,"0","0",0};

void search_book()
{
    int a=0;
    int b=0;
    printf("                         -----------------------------------------------------\n");
    printf("                         --------------------请输入查找条件-------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         ------  1.编号     2.书名     3.作者     4.退出------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("请输入:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("请输入图书编号:");
            scanf("%d",&b);
            if(b==b1.serial_num)
            {
                printf("                         -----------------------------------------------------\n");
                printf("                         ----------编号:%d  书名:%s  作者:%s  剩余:%d---------\n",b1.serial_num,b1.name,b1.author,b1.num);
                printf("                         -----------------------------------------------------\n");
            }

            else printf("查无此书!\n");
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            reader();
    }
}

void borrow_book()
{

}

void return_book()
{

}

void add_book()
{
    int a=0;
    char b[20]={0};
    char c[20]={0};
    printf("请输入编号:");
    scanf("%d",&b1.serial_num);
    printf("请输入书名:");
    scanf("%s",b1.name);
    printf("请输入作者:");
    scanf("%s",b1.author);
    b1.num++;
    printf("添加成功!\n");
    administrator();
}

void edit_book()
{

}

void delete_book()
{

}
void reader_get()
{
    char a[20]={0};
    char b[20]={0};
    A:
    printf("请输入用户名:");
    scanf("%s",a);
    printf("请输入密码:");
    scanf("%s",b);
    if(strcmp(a,reader_name)==0&&strcmp(b,reader_key)==0)
        {
            printf("登录成功！\n");
            sleep(1);
            reader();
        }
    else
    {
        printf("用户名或密码错误!\n");
        goto A;
    }

}

void admin_get()
{
    char a[20]={0};
    char b[20]={0};
    A:
    printf("请输入管理员用户名:");
    scanf("%s",a);
    printf("请输入管理员密码:");
    scanf("%s",b);
    if(strcmp(a,admin_name)==0&&strcmp(b,admin_key)==0)
    {
        printf("登录成功！\n");
        sleep(1);
        administrator();
    }
    else
    {
        printf("用户名或密码错误!\n");
        goto A;
    }
}

void show()
{
    int a=0;
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------欢迎进入图书管理系统----------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         ----------  1.登录      2.注册     3.退出  ----------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("请输入:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            log_in();
            break;
        case 2:
            sign_in();
            break;
        case 3:
            break;
    }
}

void log_in()
{
    int a=0;
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------欢迎进入图书管理系统----------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         ---  1.读者登录      2.管理员登录     3.退出系统  ---\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("请输入:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            reader_get();
            break;
        case 2:
            admin_get();
            break;
        case 3:
            show();
    }
}

void sign_in()
{

    printf("请输入用户名:");
    scanf("%s",reader_name);
    A:
    printf("请输入密码:");
    scanf("%s",reader_key);
    printf("请再次输入密码:");
    scanf("%s",cmp);
    while(strcmp(reader_key,cmp))
    {
        printf("两次密码不一致!\n");
        goto A;
    }
    printf("注册成功！\n");
    printf("即将返回登录界面···\n");
    sleep(3);
    show();
}

void reader()
{
    int a=0;
    printf("                         -----------------------------------------------------\n");
    printf("                         -------------------欢迎进入读者系统------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                           1.图书查询   2.图书借阅   3.图书归还   4.退出系统  \n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("请输入:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            search_book();
            break;
        case 2:
            borrow_book();
            break;
        case 3:
            return_book();
            break;
        case 4:
            log_in();
    }
}

void administrator()
{
    int a=0;
    printf("                         -----------------------------------------------------\n");
    printf("                         ------------------欢迎进入管理员系统-----------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                          1.添加图书  2.图书信息修改  3.删除图书  4.退出系统 \n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("请输入:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            add_book();
            break;
        case 2:
            edit_book();
            break;
        case 3:
            delete_book();
            break;
        case 4:
            log_in();
    }
}

int main()
{
    show();
    system("pause");
    return 0;
}
