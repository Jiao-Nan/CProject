#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main() {
    char key[10] = "525goodboy";
    char enter[100];
    for (int i = 0; i < 3; i++) {
        printf("���������룺");
        scanf(" %s", enter);
        if (strcmp(enter, key) == 0)
        {
            printf("��¼�ɹ���\n");
            break;
        }
        else if (i < 2)
            printf("��������㻹��%d�λ���\n", 2 - i);
        else
            printf("���ѱ�������\n");
    }
    system("pause");
    return 0;
}
