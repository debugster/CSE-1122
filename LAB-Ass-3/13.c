#include <stdio.h>

int main()
{
    int f1 = 1, f2 = 1, f, n, i;
    printf("nth Fibonacci number will be printed. value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            f = 1;
        }
        else {
            f = f1 + f2;
        }
        f1 = f2;
        f2 = f;
    }
    printf("The %dth Fibonacci number is %d\n", n, f);
    return 0;
}
