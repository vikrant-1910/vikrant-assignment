#include <stdio.h>
int main() 
{
    char str[100];
    int alphabets = 0, digits = 0, specials = 0;
	int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for ( i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
		{ 
            alphabets++;
        } else if (isdigit(str[i])) 
		{ 
            digits++;
        } else if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') 
		{
            specials++;
        }
    }
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specials);

    return 0;
}

