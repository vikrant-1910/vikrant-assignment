#include <stdio.h>
int main() 
{
    double side, surfaceArea;
    printf("Enter the length of one side of the cube: ");
    scanf("%lf", &side);
    surfaceArea = 6 * side * side;
    printf("The surface area of the cube is: %lf\n", surfaceArea);

    return 0;
}

