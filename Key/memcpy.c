#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const char *source = "Hello, memcpy!"; // Դ�ַ���
    char destination[50]; // Ŀ�껺����

    // ʹ�� memcpy ��Դ�ַ������Ƶ�Ŀ�껺����
    size_t length = strlen(source) + 1; // ����Դ�ַ������ȣ����� null ��β����
    memcpy(destination, source, length); // �����ַ�����Ŀ�껺����

    // ��Ŀ�껺�����д�ӡ���ƺ���ַ���
    printf("Copied string: %s\n", destination);
    system("pause");
    return 0;
}
