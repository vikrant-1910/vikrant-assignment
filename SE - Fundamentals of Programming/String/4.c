#include <stdio.h>
int main() 
{
    char str[100];
    int wordCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0') 
	{
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') 
		{
            i++;
        }
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0') {
            wordCount++;
            while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0') {
                i++;
            }
        }
    }
    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}

