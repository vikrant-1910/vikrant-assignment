#include<stdio.h>
main()
{
	int n,i,count=0;
	printf("Enter a Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(n%i==0)
	{
		count++;
	}
	if(count==2)
	{
		printf("The given number is prime");
	}
	else
	{
		printf("The given number is not prime");
	}
}
