#include <stdio.h>
#include <stdlib.h>

int main() {
    float *price;
    price = (float *) malloc(5 * sizeof(float));

    price[0] = 99.99;
    price[1] = 9999.99;
    price[2] = 7564.99;
    price[3] = 8349.99;
    price[4] = 74293.99;

    for(int i=0; i<5; i++){
        printf("%f\n", price[i]);
    }
}