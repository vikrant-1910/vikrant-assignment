#include <stdio.h>

int main() 
{
    double width, length, area;
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    area = width * length;

    printf("The area of the rectangle is: %lf\n", area);

    return 0;
}

