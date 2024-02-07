#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.");
                return 1;
            }
            break;
        default:
            printf("Invalid operator!");
            return 1;
    }

    printf("Result: %f\n", result);
    return 0;
}

