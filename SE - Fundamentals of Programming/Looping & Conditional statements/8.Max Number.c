//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
main()
{
	int num,digit,max=0;
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	while(num>0)
	{
		digit=num%10;
		if(digit>max)
		{
			max=digit;
		}
		num/=10;
		
	}
	printf("maximum is %d ",max);
	
} 
