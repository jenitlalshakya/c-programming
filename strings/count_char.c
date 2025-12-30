#include<stdio.h>
#include<ctype.h>

int main() {
    FILE *fp;
    fp = fopen("Students.txt", "r");

    if(fp == NULL) {
        perror("File not found!!!");
        return -1;
    }

    int ch;
    int charCount = 0;
    int lineCount = 1;
    int wordCount = 0;
    int isWord = 0; // flag set to 0 which means there is no word

    while((ch = fgetc(fp)) != EOF) {
        if(ch == '\n') {
            lineCount++;
        }

        if(!isspace(ch)) {
            charCount++;
        }

        if(!isspace(ch) && isWord == 0) {
            isWord = 1; //flag set 1, means there is a word
            wordCount++;
        } else if(isspace(ch)) {
            isWord = 0; //reset flag since no word found
        }
    }

    printf("Numbers of Characters present in file is: %d\n", charCount);
    printf("Numbers of Words present in file is: %d\n", wordCount);
    printf("Numbers of Line present in file is: %d\n", lineCount);

    fclose(fp);
    return 0;
}