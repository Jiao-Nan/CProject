#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int fd, tmp;
    if ((fd = open("D:/Clion/CProject/File/file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666)) < 0) {            //只写方式打开文件，不存在则创建，存在则清空
        printf("open file failed\n");
        return -1;
    } else
        printf("open file success\n");
    if ((tmp = close(fd)) < 0)
        printf("close file failed\n");
    else
        printf("close file success\n");
    system("pause");
    return 0;
}
