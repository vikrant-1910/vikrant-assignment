#include <stdio.h>
int main() 
{
    char schoolName[100], abbreviation[10];

    printf("Enter the full school name: ");

    while (scanf("%s", schoolName) == 1) 
	{
    	abbreviation[0] = schoolName[0];
        abbreviation[1] = '\0'; 

        printf("Abbreviated form for '%s': %s\n", schoolName, abbreviation);
    }
}

