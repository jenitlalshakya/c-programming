#include <stdio.h>

void calculate(double n);

int main() {
    double n;
    printf("Enter the value to calculate:\n");
    scanf("%lf", &n);
    printf("Original value is: %.2lf\n", n);
    calculate(n);
    return 0;
}

void calculate(double n) {
    double vat = n + 0.13 * n;
    printf("The value after adding 13 percent VAT is: %.2lf\n", vat);
}