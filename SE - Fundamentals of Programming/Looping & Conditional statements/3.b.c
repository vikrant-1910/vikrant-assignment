//WAP to take 10 no. Input from user find out below values
//b. How many odd numbers are there

#include<stdio.h>
main()
{
	int i,odd_count=0,num;
	for(i=1;i<=10;i++)
	{
		printf(" Enter number %d : ",i);
		scanf("%d",&num);
		if(num%2!=0)
		{
			odd_count++;
		}
	}
	printf("\nNumber of odd numbers: %d\n", odd_count);
	
}
