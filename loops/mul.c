#include<stdio.h>

int main() {
    FILE *mul;
    int num;
    int val;
    mul = fopen("Multiplication.txt", "w");

    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter the length: ");
    scanf("%d", &val);

    fprintf(mul, "Multiplication table for %d:\n\n", num);

    for(int i = 1; i <= val; i++) {
        int table = num * i;

        fprintf(mul, "%d X %d = %d\n", num, i, table);
    }

    printf("Multiplication table created successfully...\n");
    printf("Visit 'Multiplication.txt' to view the Table.\n");
    
    fclose(mul);
    return 0;
}