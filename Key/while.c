#include<stdio.h>

int main() {
    int a = 1;
    char c;
    printf("������һ��ɣ�\n");
    printf("A �õġ�\n");
    printf("B ���á�\n");
    while (1) {
        scanf(" %c", &c);
        if (c == 'A')
        {
            printf("˵50���Ұ��㡣\n");
            {
                while (a <= 50) {
                    printf("��%d���Ұ��㣡\n", a);
                    a++;
                }
                printf("���ˣ����ְɣ�\n");
                printf("�����������ء���������\n");
                break;
            }
        }
        else if (c == 'B') {
            printf("����\n");
            break;
        } else { printf("ֻ��ѡA����B\n"); }
    }
    return 0;
}
