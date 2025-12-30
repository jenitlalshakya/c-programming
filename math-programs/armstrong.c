#include<stdio.h>

int power(int base, int exp) {
    int result = 1;

    for(int i = 1; i <= exp; i++) {
        result *= base;
    }

    return result;
}

int isArmstrong(int n) {
    int originalNum = n;
    int sum = 0;
    int digitCounts = 0;

    while(n != 0) {
        n /= 10;
        digitCounts++;
    }

    n = originalNum;

    while(n != 0) {
        int digit = n % 10;
        sum += power(digit, digitCounts);
        n /= 10;
    }   

    return originalNum == sum;
}

int main() {
    int num;
    printf("Enter any Number: ");
    scanf("%d", &num);

    if(isArmstrong(num)) {
        printf("%d is an Armstrong Number.\n", num);
    } else {
        printf("%d is not an Armstrong Number.\n", num);
    }

    return 0;
}