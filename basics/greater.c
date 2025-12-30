#include<stdio.h>

int main() {
    int num_1;
    int num_2;

    printf("Enter First number: ");
    scanf("%d", &num_1);
    printf("Enter Second number: ");
    scanf("%d", &num_2);

    if(num_1 == num_2) {
        printf("%d is equal to %d.", num_1, num_2);
    } else if(num_1 < num_2) {
        printf("%d is less than %d.", num_1, num_2);
    } else {
        printf("%d is greater than %d.", num_1, num_2);
    }

    return 0;
}