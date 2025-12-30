#include <stdio.h>

#define MAX 200 // Maximum number of digits

void multiply(int x, int res[], int *res_size) {
    int carry = 0;

    for (int i = 0; i < *res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        res[*res_size] = carry % 10;
        carry = carry / 10;
        (*res_size)++;
    }
}

void factorial(int n, int res[], int *res_size) {
    if (n == 0 || n == 1) {
        res[0] = 1;
        *res_size = 1;
        return;
    }

    factorial(n - 1, res, res_size);
    multiply(n, res, res_size);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Invalid input! Please enter a positive number.\n");
        return 1;
    }

    int res[MAX];
    int res_size = 0;
    factorial(n, res, &res_size);

    printf("%d! = ", n);
    for (int i = res_size - 1; i >= 0; i--) {
        printf("%d", res[i]);
    }
    printf("\n");

    return 0;
}
