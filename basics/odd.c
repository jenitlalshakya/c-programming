#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("Odd.txt", "w");

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            fprintf(fp, "%d\n", i);
        }
    }

    fclose(fp);

    return 0;
}