// Write a C program to calculate profit and loss on a transaction

#include <stdio.h>
main()
{
	int sellingprice,costprice,profitamount;
	printf("\n Enter the cost price : ");
	scanf("%d",&costprice);
	printf("\n Enter the selling price : ");
	scanf("%d",&sellingprice);
	
	if(sellingprice > costprice)
	{
		profitamount=sellingprice - costprice;
		printf(" \nYour profit amount is: %d",profitamount);
		
	}
	else if(costprice > sellingprice)
	{
		profitamount=costprice - sellingprice;
		printf("\nYour loss amount is :%d",profitamount);
	}
	else
	{
		printf("\n you are in no profit no loss");
		
	}
	
	
}
