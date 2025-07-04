#include "include/utils.h"
#include <string.h>

void reverse_string(char *str) {
    int len = strlen(str);
    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

void to_uppercase(char *str) {
    while(*str) {
        if(*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        str++;
    }
}