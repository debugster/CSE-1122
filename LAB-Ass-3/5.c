/*
* To display multiplication table of a given number x
*/

#include <stdio.h>

int main()
{
    int x, y, i;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    for (i = 1; i <= 10; i++) {
        y = x * i;
        printf("%d X %2d = %2d\n", x, i, y);
    }
    return 0;
}
