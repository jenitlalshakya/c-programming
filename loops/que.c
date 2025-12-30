#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "BIM";
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    for (int i = 1; i < len; i++) {
        printf("%c", str[i]);
    }
    for (int i = len - 1; i >= 1; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    for (int i = 2; i < len; i++) {
        printf("%c", str[i]);
    }
    for (int i = len - 1; i >= 2; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}