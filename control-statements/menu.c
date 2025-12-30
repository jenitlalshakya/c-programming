#include<stdio.h>

void multiply() {
    int n = 10;

    for(int i = 0; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial (n - 1);
    }
}

void fact() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int fact = factorial(num);
    printf("Factorial of %d is: %d", num, fact);
}

void sum() {
    int a, b, c;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);

    int sum = a + b + c;

    printf("Sum of %d, %d & %d is: %d", a, b, c, sum);
}

int main() {
    int num;
    
    printf("Enter number 1, 2 or 3: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            multiply();
            break;
        case 2:
            fact();
            break;
        case 3:
            sum();
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}