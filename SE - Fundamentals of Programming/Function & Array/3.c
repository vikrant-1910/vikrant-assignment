#include <stdio.h>

void reverse_string(char *str) {
    if(*str == '\0') {
        return;
    }
    reverse_string(str + 1);
    printf("%c", *str);
}

int main() {
    char str[] = "hello";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    reverse_string(str);
    printf("\n");
    return 0;
}

