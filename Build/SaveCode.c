#include "stdio.h"

int main() {
    signed char a = -1;
    unsigned char b = (unsigned char) -1;
    int va = (int) a;
    int vb = (int) b;
    printf("va=%d\nvb=%d\n", va, vb);
}//���������ڴ��еı�ʾ��ʽ


//srand((unsigned int) time(NULL));//������������ĳ�ʼ��������time(NULL)���ص�ǰ��ϵͳʱ�䡣unsigned int������ϵͳ��ʱ��ת��Ϊ�޷�����������
//int x = rand();//�������������Ҫ��srand()����ʼ�������������
