#include<stdio.h>

int square(int *n, int *sqr) {
    (*sqr) = (*n) * (*n);

    return (*sqr);
}

int main() {
    int num;
    int sqr;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Square of %d is: %d", num, square(&num, &sqr));

    return 0;
}