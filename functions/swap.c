#include<stdio.h>

void swap(int *a, int *b);
int main() {
    int x = 5;
    int y = 3;

    printf("Before swap:\nx = %d  y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap:\nx = %d  y = %d\n", x, y);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}