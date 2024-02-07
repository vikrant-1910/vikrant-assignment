#include <stdio.h>
struct Person 
{
    char name[50];
    int age;
    float salary;
};

union Value 
{
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    printf("Size of Structure (Person): %lu bytes\n", sizeof(struct Person));
    printf("Size of Union (Value): %lu bytes\n", sizeof(union Value));

    return 0;
}

