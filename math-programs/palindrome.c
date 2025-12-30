#include <stdio.h>

int isPalindrome(int num) {
    int original = num, reverse = 0, digit;

    if(num < 0) {
        return -num;
    }
    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse == original;
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(isPalindrome(num) == 1) {
        printf("%d is palindrome number.\n", num);
    } else {
        printf("%d is NOT palindrome number.\n", num);
    }

    return 0;
}