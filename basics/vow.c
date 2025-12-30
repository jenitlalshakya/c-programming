#include<stdio.h>
#include<ctype.h>

int main() {
    char str[2000];
    int vowel = 0;
    int consonant = 0;

    printf("Enter any String: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        } else if(ch >= 'a' && ch <= 'z') {
            consonant++;
        }
    }
    printf("Vowel: %d\n", vowel);
    printf("Consonant: %d\n", consonant);

    return 0;
}