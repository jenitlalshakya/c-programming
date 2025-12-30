#include <stdio.h>

int main(){
    int num = 5;
    int i = 1;
    while(i < 100){
        if(i % num == 0){
            printf("Multiple of %d is: %d\n", num, i);
        }
        i++;
    }
    return 0;
}