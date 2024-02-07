#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(char str[]) {
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }

    int i = 0, j = len - 1;
    while(i < j) {
        if(str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void reverse_string(char str[]) {
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }

    int i = 0, j = len - 1;
    while(i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[] = "radar";
    printf("Original string: %s\n", str);

    reverse_string(str);
    printf("Reversed string: %s\n", str);

    if(is_palindrome(str)) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}

