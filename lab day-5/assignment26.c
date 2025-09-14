#include <stdio.h>

int main() {
    float a, b, res;
    char o;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &o);  
    printf("Enter second number: ");
    scanf("%f", &b);
    switch (o) {
        case ('+'):
            res = a + b;
            printf("Result: %f\n", res);
            break;
        case ('-'):
            res = a-b ;
            printf("Result: %f\n", res);
            break;
        case ('*'):
            res = a*b;
            printf("Result: %f\n", res);
            break;
        case ('/'):
            if (b != 0) {
                res = a / b;
                printf("Result: %f\n", res);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
