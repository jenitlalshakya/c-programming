#include <stdio.h>

int main() {
    FILE *py;
    py = fopen("text1.txt", "r");
    FILE *py1;
    py1 = fopen("text2.txt", "w");

    char text = fgetc(py);

while (text != EOF)
{
    fputc(text, py1);
    text = fgetc(py);
}

    printf("File has been copied successfully.\n");
    fclose(py1);
    fclose(py);
    return 0;
}