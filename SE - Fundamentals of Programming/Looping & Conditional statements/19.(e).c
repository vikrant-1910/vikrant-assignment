#include<stdio.h>
main()
{
	int row,col;
	int n=1;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		
		{
			n++;
			printf("%d",n);
		
		}
		printf("\n");
	}
	
}
