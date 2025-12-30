#include<stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is in lowercase.\n", ch);
    } else if(ch >= 'A' && ch <= 'Z') {
        printf("%c is in uppercase.\n", ch);
    } else {
        printf("%c is a digit or special character.\n", ch);
    }
}