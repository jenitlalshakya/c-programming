#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("text-files/Hello.txt", "r");

    if(fp == NULL) {
        perror("File is Empty!!!");
    }

    int ch;
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}