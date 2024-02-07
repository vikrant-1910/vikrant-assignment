#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        return 1; // It is a palindrome
    } else {
        return 0; // It is not a palindrome
    }
}

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
