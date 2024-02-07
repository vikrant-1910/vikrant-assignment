// C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>
int main() 
{
    char character;
	printf("Enter a character: ");
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z') 
	{
        printf("Uppercase character\n");
    }
    else if (character >= 'a' && character <= 'z') 
	{
        printf("Lowercase character\n");
    }
    else if (character >= '0' && character <= '9') 
	{
        printf("Digit\n");
    }
    else 
	{
        printf("Special character\n");
    }

    return 0;
}

