#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    FILE *fp;
    int i = 1;
    char str[32];
    if ((fp = fopen("D:/Clion/CProject/File/time.txt", "a+")) == NULL) {
        perror("");
        return -1;
    }
    while (fgets(str, 32, fp)) {
        if (str[strlen(str) - 1] == '\n')
            i++;
    }
    while (1) {
        time_t t = time(NULL);
        struct tm *p = localtime(&t);
        printf("%02d.%d-%d-%d %02d:%02d:%02d\n", i,
               p->tm_year + 1900, p->tm_mon + 1, p->tm_mday,
               p->tm_hour, p->tm_min, p->tm_sec);
        fprintf(fp, "%02d.%d-%d-%d %02d:%02d:%02d\n", i,
                p->tm_year + 1900, p->tm_mon + 1, p->tm_mday,
                p->tm_hour, p->tm_min, p->tm_sec);
        fflush(fp);
        i++;
        sleep(1);
    }
    fclose(fp);
    system("pause");
    return 0;
}
