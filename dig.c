#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator)
    {
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
            if (num2 == 0) {
                printf("Error: division by zero.");
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: invalid operator.");
            return 0;
    }

    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);

    return 0;
}
