#include<stdio.h>
main()
{
	int row,col,k;
	for(row=1;row<=5;row++)
	{
		for(col=row;col<5;col++)
		{
			printf(" ");
		}
		for(k=1;k<(row*2);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
