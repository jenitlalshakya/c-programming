#include <stdio.h>

void square(int n);
void _square(int *n);
int main() {
    int number;
        printf("Enter a number: \n");
        scanf("%d", &number);
        square(number);
        printf("The number is: %d\n", number);
        _square(&number);
        printf("The number is: %d\n", number);
        printf("Address in integer: %u\n", &number);
        printf("Address in pointer: %p\n", &number);
    return 0;
}

void square(int n) {
    n = n * n;
    printf("The square is: %d\n", n);
}

void _square(int *n) {
    *n *= (*n);
    printf("The square is: %d\n", *n);
}