//11.Accept 5 names from user at run time.

#include <stdio.h>
main() 
{
    char names[5][50],i;
    for ( i = 0; i < 5; i++) 
	{
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]); 
    }

    printf("\nEntered names:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("%s\n", names[i]);
    
	}
}

