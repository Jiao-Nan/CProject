#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const char *source = "Hello, memcpy!"; // 源字符串
    char destination[50]; // 目标缓冲区

    // 使用 memcpy 将源字符串复制到目标缓冲区
    size_t length = strlen(source) + 1; // 计算源字符串长度（包括 null 结尾符）
    memcpy(destination, source, length); // 复制字符串到目标缓冲区

    // 在目标缓冲区中打印复制后的字符串
    printf("Copied string: %s\n", destination);
    system("pause");
    return 0;
}
