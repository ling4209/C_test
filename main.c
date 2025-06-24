#include <stdio.h>
#include "include/utils.h"

int main() {
     // 设置控制台输出编码为UTF-8
    // SetConsoleOutputCP(65001);
    char input[100];
    printf("输入字符串: ");
    fgets(input, sizeof(input), stdin);
    
    reverse_string(input);
    to_uppercase(input);
    
    printf("处理后: %s\n", input);
    return 0;
}