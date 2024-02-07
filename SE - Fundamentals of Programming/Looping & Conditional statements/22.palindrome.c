#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int count = 0;
    int num;

    printf("Enter 3 numbers:\n");

    while (count < 3) {
        scanf("%d", &num);

        if (isPalindrome(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }

        count++;
    }

    return 0;
}

