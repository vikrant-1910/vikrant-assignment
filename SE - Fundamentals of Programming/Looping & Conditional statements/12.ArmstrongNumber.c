#include<stdio.h>
main()
{
	int num,r,result=0,ornum;
	printf("Enter a number:");
	scanf("%d",&ornum);
	num=ornum;
	while(num!=0)
	{
		r=num%10;
		result=result+(r*r*r);
		num=num/10;
	}
	if(ornum==result)
	{
		printf("num is armstrong");
	}
	else
	{
		printf("num is not armstrong");
	}
}
