//WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
main()
{
	int numbers[5],i;
	for (i=0;i<5;i++)
	{
		printf("Enter a numbers :");
		scanf("%d",&numbers[i]);
	}
	printf(" \n The numbers you entered");
	for(i=0;i<5;i++)
	{
		printf("\n%d",numbers[i]);
		
	}
}
