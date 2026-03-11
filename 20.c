#include <stdio.h>

int main() {
    int a, b;
    int sum, sub, mul;
    float div;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;

    printf("\nResults:\n");
    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %.2f\n", div);

    printf("\nThank you for using the calculator!\n");

    return 0;
}
