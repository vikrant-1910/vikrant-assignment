#include <stdio.h>
int main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("First power: %d\n", num);
    printf("Second power: %d\n", num * num);
    printf("Third power: %d\n", num * num * num);

    return 0;
}

