#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int judg(char **p,int n) {  //判断所有指针的内容是否为空
    for (int i = 0; i < n; i++) {
        if (*p[i] == '\0') {
            return 0;
        }
    }
    return 1;
}

void move(char **p,int n) {
    for (int i = 0; i < n; i++) {  //所有指针都前进一格
        p[i]++;
    }
}

int main() {
    char *a=(char *) malloc(1000);
    char *q=a;
    char *ch[] = {"dfhfght","dfhrthrthb","dfh;',;"};
    int n = sizeof(ch) / sizeof(ch[0]);
    char *p[n];
    int i, j;
    memset(a,0,1000);
    for (i = 0; i < n; i++) {
        p[i] = ch[i];
    }
    while (judg(p,n)) {
        for (i = 0; i < n; i++) {
            if (*p[0] != *p[i]) {
                break;
            }
        }
        if (i==n) {
            *q=*p[0];
        } else{
            break;
        }
        q++;
        move(p,n);
    }
    puts(a);
    system("pause");
    return 0;
}
