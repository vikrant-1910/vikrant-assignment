#include<stdio.h>
main()
{
	int year;
	printf("Enter a year");
	scanf("%d",&year);
	
	 if(year%400==0)
	 {
	 	printf("It is a Leap Year");
	 }
	else if(year%100==0)
	{
		printf("It is not a Leap Year");
	}
	else if(year%4==0)
	{
		printf("It is a Leap Year");
	}
	else
	{
		printf("It is not a Leap Year");
	}
}
