#include<stdio.h>
main()
{
    int a[6]= {9,10,4,1,7,6};
    int temp;
    int i, j;  
	printf("Before Sorting ");
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++) 
		{ if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     printf("\nAfter Sorting ");
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
}
