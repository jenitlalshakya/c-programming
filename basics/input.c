#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("Students.txt", "w");
    

    char name[100];
    int roll_no;
    int age;
    float gpa;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    fprintf(fp, "STUDENTS LISTS:\n\n");

    for(int i = 1; i <=n; i++) {
        printf("Enter name of %d student: \n", i);
        scanf("%s", name);
        printf("Enter roll number of %d student: \n", i);
        scanf("%d", &roll_no);
        printf("Enter age of %d student: \n", i);
        scanf("%d", &age);
        printf("Enter GPA of %d student: \n", i);
        scanf("%f", &gpa);

        fprintf(fp, "Student Name: %s\n", name);
        fprintf(fp, "Student Roll No.: %d\n", roll_no);
        fprintf(fp, "Student Age: %d\n", age);
        fprintf(fp, "Student GPA: %.2f\n\n", gpa);
    }

    fclose(fp);

    return 0;
}