#include <stdio.h>

int main() 
{
    char str[100],i;
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters from the string:\n");
    for ( i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}

