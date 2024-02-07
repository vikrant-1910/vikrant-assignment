#include <stdio.h>

int string_length(char str[]) {
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[] = "hello";
    printf("Length of string: %d\n", string_length(str));
    return 0;
}

