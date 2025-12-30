#include<stdio.h>
#include<string.h>

typedef struct student {
    char name[100];
    int age;
    int roll_no;
} st;

int main() {
    st bim[100];
    strcpy(bim[0].name, "Jenit");
    bim[0].age = 20;
    bim[0].roll_no = 1;

    strcpy(bim[1].name, "Ram");
    bim[1].age = 21;
    bim[1].roll_no = 2;

    printf("Name - %s\nAge - %d\nRoll No - %d\n", bim[0].name, bim[0].age, bim[0].roll_no);

    struct student *ptr = &bim[1];
    printf("\nName - %s\nAge - %d\nRoll No - %d\n", bim[1].name, ptr->age, (*ptr).roll_no);
    return 0;
}