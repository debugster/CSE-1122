/*
* To calculate LCM of two integers
*/

#include <stdio.h>

int main()
{
    int a, b, x, y, temp, gcd, lcm;
    printf("Enter two integers : ");
    scanf("%d%d", &x, &y);

    // putting larger value into x and smaller value into y if x is less than y
    if (x < y) {
        temp = x;
        x = y;
        y = temp;
    }

    // copying values for later purpose
    a = x;
    b = y;

    while (b != 0) {
        a %= b;
        temp = a;
        a = b;
        b = temp;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("The LCM of %d and %d is %d\n", x, y, lcm);
    return 0;
}
