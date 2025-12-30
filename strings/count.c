#include <stdio.h>

int main() {
    char name[100];
    int count = 0;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    for (int i=0; name[i] != '\0'; i++) {
        if(name[i] != '\0') {
            if(name[i] == ' ') {
                continue;
            }
            count++;
        }
        // if(name[i] == ' ') {
        //     count--;
        // }
    }
    printf("The number of characters in your name is %d\n", count-1);
    return 0;
}