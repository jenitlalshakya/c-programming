#include<stdio.h>

int main() {
    int arr[5];
    
    printf("Enter number: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}