/*
* Program to determine the largest among three numbers
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three integers : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            printf("%d is the largest\n", a);
        }
        else {
            printf("%d is the largest\n", c);
        }
    }
    else if (b > c) {
        printf("%d is the largest\n", b);
    }
    else {
        printf("%d is the largest\n", c);
    }
    return 0;
}

