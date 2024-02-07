//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there

#include <stdio.h>
main() 
{
    int even_count = 0,num,i;
	for ( i = 1; i <= 10; i++) 
	{
        printf("Enter number %d: ", i);
        scanf("%d", &num);

            if (num % 2 == 0) 
			{
            	even_count++;
        	}
    }

    printf("\nNumber of even numbers: %d\n", even_count);
}


