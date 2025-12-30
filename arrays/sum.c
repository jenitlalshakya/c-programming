#include <stdio.h>

int main() {
    long long a, b; // Use signed long long
    printf("Enter two numbers:\n");
    scanf("%lld %lld", &a, &b); // Use %lld for long long
    printf("Sum of %lld and %lld is %lld\n", a, b, a + b); // Use %lld for long long
    return 0;
}