// 9.Write a program make a summation of given number(eg.1523 Ans:-11)

#include <stdio.h>

int main() 
{
    int number,remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) 
	{
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    printf("Sum of the digits: %d\n", sum);
}

