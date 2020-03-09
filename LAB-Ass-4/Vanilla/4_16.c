#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, y, z;
    printf("Enter a decimal integer : ");
    scanf("%d", &x);
    printf("Power of 2 :");
    scanf("%d", &n);
    y = x * (int)pow(2, n);
    printf("By Multiplying : %d x 2^%d = %d\n", x, n, y);
    z = x << n;
    printf("By Shifting %d bits to the left side : %d x 2^%d = %d\n", n, x, n, z);
    return 0;
}
