#include <stdio.h>
#include <ctype.h>

int main() {
    char str[2000];
    int vowel = 0;
    int consonant = 0;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i=0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        } else if(ch == ' ' || ch == '@' || ch == '"' || ch == '\'' || ch == '.' || ch == ',') {
            continue;
        } else {
            consonant++;
        }
    }
    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", consonant-1);
    return 0;
}