//WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>
main()
{
	int height;
	printf(" \n Enter the height : ");
	scanf("%d",&height);
	if(height>=150 && height<=170)
	{
		printf("Your height is Average");
	}
	else if(height>170 && height<200)
	{
		printf("Your height is perfect");
	}
	else if(height<165)
	{
		printf("Your height is short");
	}
	
}
