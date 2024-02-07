//WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int number;
	printf("\n Enter the number : ");
	scanf("%d",&number);
	
	(number%2==0)?printf("\nNumber is Even"):printf("\nNumber is Odd");
}


