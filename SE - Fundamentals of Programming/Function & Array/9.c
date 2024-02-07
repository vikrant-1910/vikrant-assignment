#include <stdio.h>

// Define a structure
struct Point {
    int x;
    int y;
};

// Define a union
union Number {
    int intValue;
    float floatValue;
};

int main() {
    // Using structure
    struct Point point;
    point.x = 10;
    point.y = 20;

    printf("Structure Point: x = %d, y = %d\n", point.x, point.y);
    printf("Size of Structure Point: %lu bytes\n", sizeof(struct Point));

    // Using union
    union Number number;
    number.intValue = 10;
    printf("Union Number: intValue = %d, floatValue = %.2f\n", number.intValue, number.floatValue);
    number.floatValue = 3.14;
    printf("Union Number: intValue = %d, floatValue = %.2f\n", number.intValue, number.floatValue);
    printf("Size of Union Number: %lu bytes\n", sizeof(union Number));

    return 0;
}

