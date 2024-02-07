// Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:

#include<stdio.h>
main()
{
	int temp;
	printf(" \n Enter the tempreature :");
	scanf("%d",&temp);
	if(temp < 0 )
	{
		printf("Freezing weather");
	}
	else if(temp>0 && temp<=10)
	{
		printf("Very Cold weather");
	}
	else if(temp>10 && temp<=20)
	{
		printf("Cold weather");
	}
	else if(temp>20 && temp<=30)
	{
		printf("Normal in Temp");
	}
	else if(temp>30 && temp<=40)
	{
		printf("It is hot");
	}
	else
	{
		printf("It is very hot");
	}
	
}
