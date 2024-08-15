#include <stdio.h>
#include <stdlib.h>

int lp(int x)
{
    if(((x % 4 == 0) && (x % 100 != 0)) || (x % 400==0)){
        return 1;
    }
    return 0;
}

int main(){
    int a = 0, b = 0, c = 0;
    int m=0,n=0;
    printf("Please input year month and day:");
    scanf("%d%d%d", &a, &b, &c);
    if(b < 1 || b > 12 || c < 1 || c > 31){
        printf("Error!\n");
        system("pause");
        return 0;
    }
    if(b == 1){
        printf("第 %d 天\n", 31 + c);
    }
    else if(b==2){
        if(c<=28)
            printf("第 %d 天\n",31+c);
        else if(c==29){
            if(lp(a)==1)
                printf("第 %d 天\n",31+c);
            else{
                printf("Error!\n");
                system("pause");
                return 0;
            }
        }
        else{
            printf("Error!\n");
            system("pause");
            return 0;
        }
    }
    else if(b>=3 && b<=7){
        if(b%2 == 0){
            m=(b-2)/2;
            n=(b-4)/2;
            if(lp(a)==0)
                printf("第 %d 天\n",59+m*31+n*30+c);
            else
                printf("第 %d 天\n",60+m*31+n*30+c);
        }
        else{
            m=(b-3)/2;
            if(lp(a)==0)
                printf("第 %d 天\n",59+m*31+m*30+c);
            else
                printf("第 %d 天\n",60+m*31+m*30+c);
        }
    }
    else{
        if(b%2==0){
            m=(b-8)/2;
            if(lp(a)==0)
                printf("第 %d 天\n",59+(m+3)*31+(m+2)*30+c);
            else
                printf("第 %d 天\n",60+(m+3)*31+(m+2)*30+c);
        }
        else{
            m=(b-7)/2;
            n=(b-8)/2;
            if(lp(a)==0)
                printf("第 %d 天\n",59+(m+3)*31+(n+2)*30+c);
            else
                printf("第 %d 天\n",60+(m+3)*31+(n+2)*30+c);
        }
    }
    system("pause");
    return 0;
}