#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch);
void remove_newline(char *str) {
    char *newline = strchr(str, '\n');
    if (newline) {
        *newline = '\0';
    }
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    puts("Enter a character to check: ");
    scanf("%c", &ch);
    checkChar(str, ch);
    return 0;
}

void checkChar(char str[], char ch) {
        int n = 0;
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Character %c found at position %d\n", ch, i+1);
            n++;
        }
    }

    remove_newline(str);
    if(n != 0) {
    printf("Numbers of characters found in '%s' is %d", str, n);
    } else {
    printf("Character '%c' not found in the string\n", ch);
    }

    return;
}