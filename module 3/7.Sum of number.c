#include<stdio.h>  
main()    
{    
	int n,sum,m;    
	printf("Enter a number:");    
	scanf("%d",&n);    
	while(n>0)    
  {    
	m=n%10;    
	sum=sum+m;    
	n=n/10;    
  }    
	printf("Sum is=%d",sum);    
}
