//WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>
int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap using multiplication
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("After swapping (using multiplication):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Input the two numbers again for swapping using division
    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap using division
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping (using division):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

