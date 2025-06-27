#include "include/utils.h"
#include <string.h>

// 反转字符串函数
void reverse_string(char *str) {
    // 获取字符串长度
    int len = strlen(str);
    
    // 遍历前一半字符
    for(int i = 0; i < len/2; i++) {
        // 临时保存当前字符
        char temp = str[i];
        
        // 交换对称位置的字符
        str[i] = str[len-i-1];
        
        // 将临时字符放入对称位置
        str[len-i-1] = temp;
    }
}

// 转大写函数
void to_uppercase(char *str) {
    // 遍历字符串直到空终止符
    while(*str) {
        // 检查是否是小写字母
        if(*str >= 'a' && *str <= 'z') {
            // ASCII码值减去32转为大写
            *str -= 32;
        }
        // 移动指针到下一个字符
        str++;
    }
}