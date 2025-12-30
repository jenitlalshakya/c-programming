#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("text-files/file.txt", "r");
    int num;
    fscanf(file, "%d", &num);
    printf("Number is: %d\n", num);
    fscanf(file, "%d", &num);
    printf("Number is: %d\n", num);
    fscanf(file, "%d", &num);
    printf("Number is: %d\n", num);
    fscanf(file, "%d", &num);
    printf("Number is: %d\n", num);
    fscanf(file, "%d", &num);
    printf("Number is: %d\n", num);
    fclose(file);
}