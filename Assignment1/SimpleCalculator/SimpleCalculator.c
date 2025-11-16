#include <stdio.h>

int main() {
    // operator is a char 
    char operator;

    //the two numbers and the result are doubles to allow for decimal calculations
    double num1, num2, result;

    // The user inputs the operator then inputs the two numbers separated by space
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    
    // use of switch case as the control statement instead of if-else statements

    switch (operator) {
        //addition
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        //subtraction
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        //multiplication
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        //division
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        //modulus
        case '%':
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Operator is not recognised.\n");
            break;
    }

    return 0;
}