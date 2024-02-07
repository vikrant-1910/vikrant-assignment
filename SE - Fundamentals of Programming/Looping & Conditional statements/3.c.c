//WAP to take 10 no. Input from user find out below values
// c.Sum of even numbers

#include<stdio.h>
main()
{
	int num,i,evensum=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&num);
		if(num%2==0)
		{
			evensum=evensum+i;
		}
	}
	printf("Evensum=%d",evensum);
}

