#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void menu() {
    printf("-------------------------------------------------\n");
    printf("------------------1.��ʼ��Ϸ---------------------\n");
    printf("------------------2.�˳���Ϸ---------------------\n");
    printf("-------------------------------------------------\n");
}

void game() {
    int x = rand();//�������������Ҫ��srand()����ʼ�������������
    int y = x % 100 - 1;//�κ����ֶ�nȡģ���������0~n-1
    int z;
    printf("��1~100������\n");
    printf("�²¿������ɵ���ʲô����\n");
    while (1) {
        scanf("%d", &z);
        if (z < y) {
            printf("��С��\n");
        } else if (z > y) {
            printf("�´���\n");
        } else {
            printf("�¶���\n");
            break;
        }

    }

}

int main() {
    int a;
    srand((unsigned int) time(NULL));//������������ĳ�ʼ��������time(NULL)���ص�ǰ��ϵͳʱ�䡣unsigned int������ϵͳ��ʱ��ת��Ϊ�޷�����������
    while (1) {
        menu();
        printf("�����룺");
        scanf("%d", &a);
        if (a == 1) {
            game();
            continue;
        } else if (a == 2) {
            printf("��Ϸ������\n");
            break;
        } else {
            printf("�������\n");
            continue;
        }
    }
    //system("pause");
    return 0;
}
