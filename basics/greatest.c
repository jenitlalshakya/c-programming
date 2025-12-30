#include <stdio.h>

int num(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The greatest number is: %d\n", num(a, b, c));
    return 0;
}

int num(int a, int b, int c){
    if(a>b && a>c){
        return a;
    } else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}
