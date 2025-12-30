#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("Value at %d is: %d\n", i, ptr[i]);
    }

    ptr = realloc(ptr, 8);

    printf("\nEnter 8 numbers: ");
    for(int i = 0; i < 8; i++) {
        scanf("%d", &ptr[i]);
    }

    //print
    for(int i = 0; i < 8; i++) {
        printf("Value at %d is: %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}