#include <stdio.h>

// Function to calculate the sum of digits recursively
int sumOfDigits(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: return last digit + sum of digits of the rest
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Calculate and print the sum of digits
    int result = sumOfDigits(number);
    printf("The sum of the digits of %d is: %d\n", number, result);
    
    return 0;
}
