#include <stdio.h>
int main() 
{
    char countryName[100], abbreviation[10];

    printf("Enter Country's Name: ");

    while (scanf("%s", countryName) == 1) 
	{
    	abbreviation[0] = countryName[0];
        abbreviation[1] = '\0'; 

        printf("Abbreviated form for '%s': %s\n", countryName, abbreviation);
    }
}

