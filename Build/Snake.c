#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <memory.h>
#include <string.h>
#define  FOOD  "-"//���ǰ������Ӻ�ʳ��Լ���ͼ�úڿ���ʾ������Ϊ��
//�߳�ʼλ�õ�����
#define  INIT_X 24
#define  INIT_Y 2
//���ù��λ�ã�֮���ʹ��������������д�ӡ�����ӣ�ʳ���ͼ��
void SetPos(int x,int y){
    HANDLE handle =  GetStdHandle(STD_OUTPUT_HANDLE);//�ѱ�׼����ľ���õ�������������handle��
    COORD pos = {0};
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);//����handle�����λ�ã�
}
//����ͼ
void DrawMap(void){
    int i;
    for (i=0;i<58;i+=2)//������ͼ���ϱ߽磬�ڿ��ƽ���ÿһ�����֣�ռ��λ������ÿ��i+2

    {
        SetPos(i,0);
        printf(FOOD);
    }
    for (i=0;i<58;i+=2)//������ͼ���±߽�
    {
        SetPos(i,26);
        printf(FOOD);
    }
    for (i=0;i<26;i++)//������ͼ����߽�
    {
        SetPos(0,i);
        printf(FOOD);
    }
    for (i=0;i<=26;i++)//������ͼ���ұ߽�
    {
        SetPos(58,i);
        printf(FOOD);
    }
}
// �����ӽڵ㣬��Ϊ����Ҫ��ӡ�����ӵ�ÿһ���ڵ��ڵ�ͼ����ʾ�����Խṹ������Ҫ�������ӽ���x,y���꣬
typedef struct node{
    int x;
    int y;
    struct node* next;//��Ϊʹ������Ľṹ����������Ҫ����ÿһ�������һ�����ĵ�ַ������һ������
}SnakeNode,*pSnakeNode;
// �ߵ����߷���
enum DIRECTION{ UP=1,DOWN,LEFT,RIGHT};
//�ߵ�״̬
enum  Status{OK,KILL_BY_SELF,KILL_BY_WALL,ESC};

// �߱���
typedef struct snake{
    pSnakeNode _pSnake;//��ͷָ��
    pSnakeNode _pFood;//ʳ��
    enum DIRECTION _Dir;//�����ߵķ���
    enum Status _Status;//�ߵĵ�ǰ״̬
    int _SleepTime;//ÿ��һ��ͣ����ʱ��
}Snake,*pSnake;

void Welcome();//��������Ϸ��ʼ֮ǰ��һ����ӭ����
void InitSnake(pSnake ps){//��Ϊ����һ�����������ڿ�ʼ��ʱ������Ҫ��ʼ����
    pSnakeNode cur = NULL;//�����������õ������ӽ��
    int i = 0;
    cur = malloc(sizeof(SnakeNode));
    memset(cur,0x00,sizeof(SnakeNode));
    cur->next = NULL;
    cur->x = INIT_X;//���������ӵ�һ���˽���λ��
    cur->y = INIT_Y;
    for (i=1;i<=4;i++)//���ѭ��ʹ��ͷ��ķ������һ�γ�ѭ����ʱ��cur��ָ���һ����㣬Ҳ������ͷ���
    {
        ps->_pSnake = malloc(sizeof(SnakeNode));
        ps->_pSnake->next = cur;
        ps->_pSnake->x =INIT_X+i*2;
        ps->_pSnake->y = INIT_Y;
        cur = ps->_pSnake;
    }
    while (cur!=NULL)//����ÿһ�������ӽ�������x,y�����ӡ��������
    {
        SetPos(cur->x,cur->y);
        printf(FOOD);
        cur = cur->next;
    }
    ps->_Dir = RIGHT;//���ó�ʼ�ߵĳ�������
    ps->_SleepTime = 500;
    ps->_Status = OK;//�����ߵĳ�ʼ״̬��OK����Ȼ��û������
}
void CreatFood(pSnake ps){//ʳ�����߽ṹ�������һ��״̬�����ǰ�ʳ���õ����������г�ʼ��
    pSnakeNode cur = NULL;
    pSnakeNode food = NULL;//ʳ��Ҳ��һ����㣬�������߽��Ľṹ�嶨��
    food = malloc(sizeof(SnakeNode));
    again:
    memset(food,0x00,sizeof(SnakeNode));
    do{
        food->x = rand()%56+2;//��Ϊ���Ǻ��ŵ�ǽ�����һ��������58��λ�ã�һ��ʳ��ı���ռ��λ����������%56+2����ʳ���x���겻��Խ��
    }while(food->x %2 != 0);
    food->y = rand()%25+1;//��Ϊ�������ŵ�ǽ�����µ�λ��������26������%25+1
    cur = ps->_pSnake;
    while (cur!=NULL)//���ѭ���ж����������ʳ����û�к��ߵ�λ���ص���������ص����Ǿ�ʹ��goto��䷵�أ����²���һ��
    {
        if(cur->x == food->x && cur->y == food->y)
        {
            goto again;
        }
        cur = cur->next;
    }
    ps->_pFood = food;
    SetPos(food->x,food->y);//���ú�ʳ�������֮��������Ļ����Ӧλ�����
    printf(FOOD);
}
void EatFood(pSnakeNode nNode,pSnake ps){
    pSnakeNode cur = ps->_pSnake;//����һ����㣬����ʳ��߳Ե�֮��������������뵽����������
    nNode->next = cur;
    ps->_pSnake = nNode;
    cur = ps->_pSnake;
    while (cur!=NULL)//������֮���ڰ���������Ҳ�����ߴ�ӡһ��
    {
        SetPos(cur->x,cur->y);
        printf(FOOD);
        cur = cur->next;
    }
    CreatFood(ps);//ʳ��Ե�֮���ڲ���һ����ʳ��
}
void NoFood(pSnakeNode nNode,pSnake ps){//����ƶ�����һ��û��ʳ���ô�Ͱ������µ�λ�ô�ӡһ��
    pSnakeNode cur = ps->_pSnake;
    nNode->next = cur;
    ps->_pSnake = nNode;
    cur = ps->_pSnake;
    while (cur->next->next!=NULL)//��Ϊ�ߵĳ�����һ���ģ��������µ�λ�ô�ӡ֮�����һ������ÿո���棬�Ͳ�����һ������
    {
        SetPos(cur->x,cur->y);
        printf(FOOD);
        cur = cur->next;
    }
    SetPos(cur->x,cur->y);
    printf(FOOD);
    SetPos(cur->next->x,cur->next->y);//���ú����һ��λ�õĽ��
    printf("  ");//�ÿո���棬��ô����Ļ��ʾ��������ǰ����һ��
    free(cur->next);
    cur->next = NULL;
}
int NextHasFood(pSnakeNode nNode,pSnake ps){
    return ps->_pFood->x == nNode->x  && ps->_pFood->y == nNode->y;
}
void SnakeMove(pSnake ps){
    pSnakeNode  nNode = malloc(sizeof(SnakeNode));// ����һ����㣬��������ͷ����ֵ���ٸ�����һ��Ҫ�ߵķ���ȷ�����������ֵ
    memset(nNode,0x00,sizeof(SnakeNode));
    nNode->x = ps->_pSnake->x;
    nNode->y = ps->_pSnake->y;
    switch (ps->_Dir)
    {
        case UP:
            nNode->y-=1;
            break;
        case DOWN:
            nNode->y+=1;
            break;
        case LEFT:
            nNode->x-=2;
            break;
        case RIGHT:
            nNode->x+=2;
            break;
        default:
            break;
    }
    if (NextHasFood(nNode,ps))//�ж���һ����û��ʳ�
    {
        EatFood(nNode,ps);//�еĻ����ͽ����ʳ��Ĳ�������
    }
    else
    {
        NoFood(nNode,ps);//û�еĻ����ͽ���û��ʳ��Ĳ���
    }
}
int KillBySelf(pSnake ps){//�ñ����ж���ͷ�Ƿ�������ӵĽ��������غϣ��غϾ��ǳԵ����Լ�
    pSnakeNode cur= ps->_pSnake->next;
    while (cur!=NULL)
    {
        if (cur->x == ps->_pSnake->x  && cur->y == ps->_pSnake->y)
        {
            return 1;
        }
        cur = cur->next;
    }
    return 0;
}
int KillByWall(pSnake ps){//�����ͷ���������ǽ�غ��ˣ��Ǿ���ײǽ��
    if(ps->_pSnake->x == 0  || ps->_pSnake->x == 58 || ps->_pSnake->y == 0 || ps->_pSnake->y == 26)
        return 1;
    return 0;
}
void SnakeRun(pSnake ps){
    do
    {
        if(GetAsyncKeyState(VK_UP) && ps->_Dir != DOWN){//�жϼ������������ǡ��������ߵķ���û�����£��Ǿͽ���ѭ�������ߵķ����״̬�ĳ�����
            ps->_Dir = UP;
        }
        if(GetAsyncKeyState(VK_DOWN) && ps->_Dir != UP){//�жϼ������������ǡ��������ߵķ���û�����ϣ��Ǿͽ���ѭ�������ߵķ����״̬�ĳ�����

            ps->_Dir = DOWN;
        }
        if(GetAsyncKeyState(VK_LEFT) && ps->_Dir != RIGHT){//�жϼ���������������������ߵķ���û�����ң��Ǿͽ���ѭ�������ߵķ����״̬�ĳ�����

            ps->_Dir = LEFT;
        }
        if(GetAsyncKeyState(VK_RIGHT) && ps->_Dir != LEFT){//�жϼ��������������Ҽ������ߵķ���û�������Ǿͽ���ѭ�������ߵķ����״̬�ĳ�����

            ps->_Dir = RIGHT;
        }
        if(GetAsyncKeyState(VK_ESCAPE)){//�����������ESC�����Ǿ�״̬�ĳ��˳�
            ps->_Status = ESC;
        }
        SnakeMove(ps);//�ߵķ������֮���Ǿ���ǰ��������һ��
        if (KillBySelf(ps))//�жϵ�ǰ�Ƿ�ᱻ�Լ�ҧ��
        {
            ps->_Status = KILL_BY_SELF;
            SetPos(30,12);
            printf("�Լ��㶼��ԣ���զ�����죡\n");
        }
        if(KillByWall(ps))//�ж��Ƿ�ᱻǽײ��
        {
            ps->_Status = KILL_BY_WALL;
            SetPos(30,12);
            printf("���ǰɣ�����ǽ������ײ��\n");
        }
        if(ps->_Status == ESC){
            printf("�㾹Ȼ�˳���\n");
        }
        Sleep(ps->_SleepTime);
    } while (ps->_Status == OK);//����ߵ�״̬��OK�Ǿ�һֱ�����жϣ�
}
void SnakeStart(pSnake ps){//��ʼ֮ǰ��׼������
    srand(time(NULL));
    system("mode con cols=100 lines=30");
    system("cls");
    DrawMap();//����ͼ
    InitSnake(ps);//��ʼ���ߡ�������
    CreatFood(ps);//����һ��ʳ��
}
void Welcome(void){//��ӭ����
    system("mode con cols=100 lines=30");
    system("cls");
    SetPos(38,6);
    printf("welcome come to SnakeGame\n");
    SetPos(38,8);
    printf("��������control direction\n");
    SetPos(45,10);
    printf("ESC For Exit\n");
    getchar();
    system("cls");
}
int main(){
    Snake s;
    memset(&s,0x00,sizeof(Snake));
    Welcome();
    SnakeStart(&s);
    SnakeRun(&s);
    system("pause");
    return 0;
}