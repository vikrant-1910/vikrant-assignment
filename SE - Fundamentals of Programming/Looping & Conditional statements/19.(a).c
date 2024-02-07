#include <stdio.h>

int main() 
{
	int i,j,k;
    // Print the pattern
    for ( i = 1; i <= 5; i++) {
        // Print leading zeros
        for ( j = 1; j <= 5 - i; j++) {
            printf("0 ");
        }

        // Print ones
        for ( k = 1; k <= i; k++) {
            printf("1 ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

