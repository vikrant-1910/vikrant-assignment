//Check Number Is Positive or Negative 
#include<stdio.h>
main()
{
	int num;
	printf("\n Enter the number : ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Number is positive");
	}
	else if(num<0)
	{
		printf("Number is negative");
	}
	else
	{
		printf("Number is zero");
	}
}
