//ͼ����Ϣ����ӡ�ͼ����Ϣ�Ĵ�ӡ��ͼ����Ϣ�Ĳ�ѯ��ͼ����Ϣ���޸ġ�ͼ����Ϣ��ɾ����
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
    printf("                         --------------------�������������-------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         ------  1.���     2.����     3.����     4.�˳�------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("������:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("������ͼ����:");
            scanf("%d",&b);
            if(b==b1.serial_num)
            {
                printf("                         -----------------------------------------------------\n");
                printf("                         ----------���:%d  ����:%s  ����:%s  ʣ��:%d---------\n",b1.serial_num,b1.name,b1.author,b1.num);
                printf("                         -----------------------------------------------------\n");
            }

            else printf("���޴���!\n");
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
    printf("��������:");
    scanf("%d",&b1.serial_num);
    printf("����������:");
    scanf("%s",b1.name);
    printf("����������:");
    scanf("%s",b1.author);
    b1.num++;
    printf("��ӳɹ�!\n");
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
    printf("�������û���:");
    scanf("%s",a);
    printf("����������:");
    scanf("%s",b);
    if(strcmp(a,reader_name)==0&&strcmp(b,reader_key)==0)
        {
            printf("��¼�ɹ���\n");
            sleep(1);
            reader();
        }
    else
    {
        printf("�û������������!\n");
        goto A;
    }

}

void admin_get()
{
    char a[20]={0};
    char b[20]={0};
    A:
    printf("���������Ա�û���:");
    scanf("%s",a);
    printf("���������Ա����:");
    scanf("%s",b);
    if(strcmp(a,admin_name)==0&&strcmp(b,admin_key)==0)
    {
        printf("��¼�ɹ���\n");
        sleep(1);
        administrator();
    }
    else
    {
        printf("�û������������!\n");
        goto A;
    }
}

void show()
{
    int a=0;
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------��ӭ����ͼ�����ϵͳ----------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         ----------  1.��¼      2.ע��     3.�˳�  ----------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("������:");
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
    printf("                         -----------------��ӭ����ͼ�����ϵͳ----------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         ---  1.���ߵ�¼      2.����Ա��¼     3.�˳�ϵͳ  ---\n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("������:");
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

    printf("�������û���:");
    scanf("%s",reader_name);
    A:
    printf("����������:");
    scanf("%s",reader_key);
    printf("���ٴ���������:");
    scanf("%s",cmp);
    while(strcmp(reader_key,cmp))
    {
        printf("�������벻һ��!\n");
        goto A;
    }
    printf("ע��ɹ���\n");
    printf("�������ص�¼���桤����\n");
    sleep(3);
    show();
}

void reader()
{
    int a=0;
    printf("                         -----------------------------------------------------\n");
    printf("                         -------------------��ӭ�������ϵͳ------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                           1.ͼ���ѯ   2.ͼ�����   3.ͼ��黹   4.�˳�ϵͳ  \n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("������:");
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
    printf("                         ------------------��ӭ�������Աϵͳ-----------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("                          1.���ͼ��  2.ͼ����Ϣ�޸�  3.ɾ��ͼ��  4.�˳�ϵͳ \n");
    printf("                         -----------------------------------------------------\n");
    printf("                         -----------------------------------------------------\n");
    printf("������:");
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
