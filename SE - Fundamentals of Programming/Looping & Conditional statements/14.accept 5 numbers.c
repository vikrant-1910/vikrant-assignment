//14.Accept 5 numbers from users and find those numbers factorials 

#include <stdio.h>
main() 
{
    int num, i, fact = 1,j;
	for (i = 1; i <= 5; i++) 
	{
        printf("Enter number %d: ", i);
        scanf("%d", &num);
		{
            fact = 1;
			for (j = 1; j <= num; j++) 
			{
                fact *= j;
            }

            printf("Factorial of %d is %d\n", num, fact);
        }
    }
}

