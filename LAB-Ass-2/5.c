/*
* Program to determine GRADE
*/

#include <stdio.h>

int main()
{
    double marks;
    printf("Enter obtained marks : ");
    scanf("%lf", &marks);
    if (marks >= 80 && marks <= 100) {
        printf("Grade : A\n");
    }
    else if (marks >= 65 && marks < 80) {
        printf("Grade : B\n");
    }
    else if (marks >= 50 && marks < 65) {
        printf("Grade : C\n");
    }
    else if (marks >= 40 && marks < 50) {
        printf("Grade : D\n");
    }
    else {
        printf("Grade : F\n");
    }
    return 0;
}
