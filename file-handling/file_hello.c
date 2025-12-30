#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("text-files/Hello.txt", "w");

    char ch;
    printf("Enter words:\n");

    while((ch = getchar()) != '\n') {
        fputc(ch, fp);
    }

    fclose(fp);
    return 0;
}