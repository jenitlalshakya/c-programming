#include<stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Ternary operator:
    a > b ? printf("%d is greater than %d", a, b) : printf("%d is greater than %d", b, a);

    return 0;
}