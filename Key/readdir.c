#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *dp;
    struct dirent *dt;
    if ((dp = opendir("D:/Clion/CProject/File")) == NULL) {
        perror("");
        return -1;
    }
    while ((dt = readdir(dp)))
        printf("%s\n", dt->d_name);
    closedir(dp);
    system("pause");
    return 0;
}
