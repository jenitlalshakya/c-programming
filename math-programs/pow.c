#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Enter number to calculate square:\n");
    scanf("%f", &num);
    float power = pow(num, 2);
    printf("Square of %.2f is: %.2f\n", num, power);
    return 0;
}