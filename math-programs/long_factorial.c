#include <stdio.h>

int factorial(unsigned long long n);

int main() {
    unsigned long long n;
    printf("Enter any number: ");
    scanf("%lld", &n);

    unsigned long long fact = factorial(n);
    
    printf("Factorial of %lld is: %lld", n, fact);
    
    return 0;
}

int factorial(unsigned long long n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}