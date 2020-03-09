/*
* To display m to n using loop
*/

#include <stdio.h>

int main()
{
    int m, n, i;
    printf("Enter the value of m & n : ");
    scanf("%d%d", &m, &n);
    if (m < n) {
        for (i = m; i <= n; i++) {
            printf("%d\n", i);
        }
    }
    else {
        for (i = m; i >= n; i--) {
            printf("%d\n", i);
        }
    }
    return 0;
}
