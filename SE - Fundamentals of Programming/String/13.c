#include <stdio.h>
int main() 
{
    char str[100], result[100];
    int i,j;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for ( i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n", result);

    return 0;
}

