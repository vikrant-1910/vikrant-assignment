#include <stdio.h>

#define NUMBERS_COUNT 5

int main() {
    int numbers[NUMBERS_COUNT],i;

    // Accepting numbers from the user
    printf("Enter %d numbers:\n", NUMBERS_COUNT);
    for ( i = 0; i < NUMBERS_COUNT; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Checking if each number is even or odd
    printf("\nResults:\n");
    for (i = 0; i < NUMBERS_COUNT; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }

    return 0;
}

