#include<stdio.h>
void main()
{
	int row,col,a[2][2],b[2][2],add[2][2],sub[2][2],multi[2][2];
	printf("enter first matrix ");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
		printf("enter second matrix ");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	//addition	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			add[row][col]=a[row][col]+b[row][col];
		}
	}
	//subtraction
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			sub[row][col]=a[row][col]-b[row][col];
		}
	}
	//multiplication
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			multi[row][col]=a[row][col]*b[row][col];
		}
	}
	printf("addition of matrix \n");
	
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",add[row][col]);
		}
		printf("\n");
	}
	
	printf("subtraction of matrix \n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",sub[row][col]);
		}
		printf("\n");
	}
	
	printf("multiplication of matrix \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",multi[row][col]);
		}
		printf("\n");
	}
	
}
