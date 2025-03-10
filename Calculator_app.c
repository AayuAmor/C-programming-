#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Taking operator input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Performing calculation based on operator
    switch(operator) {
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
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    // Displaying result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}