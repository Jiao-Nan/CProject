#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <time.h>

int main(int argc, char *argv[]) {
    DIR *dp;
    struct dirent *dt;
    struct stat buf;
    struct tm *t;
    if ((dp = opendir("D:/Clion/CProject/Build")) == NULL) {
        perror("");
        return -1;
    }
    while ((dt = readdir(dp))) {
        char x[100]="D:/Clion/CProject/Build/";
        printf("%s", dt->d_name);
        if ((stat(strcat(x,dt->d_name), &buf)) < 0) {
            perror("");
            return -2;
        }
        printf("             大小：%d字节", (int) buf.st_size);
        t = localtime(&buf.st_ctime);
        printf("             日期：%d-%d-%d\n", t->tm_year, t->tm_mon, t->tm_mday);
    }
    closedir(dp);
    system("pause");
    return 0;
}
