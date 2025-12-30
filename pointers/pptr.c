#include<stdio.h>

int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("Value of i is : %d\n", **pptr);
    printf("Address of i is : %d\n", *pptr);
    printf("Address of ptr is : %d\n", pptr);
    printf("Address of pptr is : %d\n", &pptr);

    return 0;
}