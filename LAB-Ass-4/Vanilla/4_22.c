#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (2 * n - 1); j++) {
            if (j == n || j >= n - (i - 1) && j <= n + (i - 1)) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= (2 * n - 1); j++) {
            if (j == n || j > (i - 1) && j <= (2 * n - i)) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
