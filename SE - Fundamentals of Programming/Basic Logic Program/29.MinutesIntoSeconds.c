#include <stdio.h>
int main()
{
    int minutes, seconds, hours;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60; 

    printf("%d minutes is equal to %d seconds.\n", minutes, seconds);
    
    hours = minutes / 60; 

    printf("%d minutes is equal to %d hours.\n", minutes, hours);

    return 0;
}

