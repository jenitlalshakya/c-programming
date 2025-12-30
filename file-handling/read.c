#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("text-files/Students.txt", "r");

    if(fp == NULL) {
        perror("File not found!!!");
        return -1;
    }

    int ch;
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}