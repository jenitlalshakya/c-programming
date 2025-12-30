#include<stdio.h>

void printName(char arr[]);

int main() {
    char name[] = "Jenit Lal Shakya";

    printName(name);

    return 0;
}

void printName(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}