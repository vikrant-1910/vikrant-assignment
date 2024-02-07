//calculate the Factorial of a Given Number using while loop

#include <stdio.h>
main() 
{
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) 
	{
        factorial *= number;
        number--;
    }

    printf("\nFactorial: %d", factorial);
}

