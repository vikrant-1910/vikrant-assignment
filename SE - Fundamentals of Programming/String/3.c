#include <stdio.h>

int main() 
{
    char str[100],i;
    printf("Enter a string: ");
    scanf("%s", str);
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    printf("Individual characters of the string in reverse order:\n");
    for (i = length - 1; i >= 0; i--) 
	{
        printf("%c\n", str[i]);
    }

    return 0;
}

