#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, m, n, i, r = 1;
    printf("x = ");
    scanf("%d", &x);
    printf("n = ");
    scanf("%d", &m);
    n = abs(m);
    for (i = 1; i <= n; i++) {
        r *= x;
    }
    if (m >= 0 || r == 1) {
        printf("%d^%d = %d\n", x, m, r);
    }
    else {
        printf("%d^%d = 1 / %d\n", x, m, r);
    }
    return 0;
}
