#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Add: %.2f\n", a + b);
    printf("Subtract: %.2f\n", a - b);
    printf("Multiply: %.2f\n", a * b);
    if (b != 0) printf("Divide: %.2f\n", a / b);
    else printf("Cannot divide by zero\n");
    return 0;
}
