/*
* To find sum and average of n numbers
*/

#include <stdio.h>

int main()
{
    int n, i, m, sum = 0;
    double av;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter %d values : ", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &m);
        sum += m;
    }
    av = (double) sum / n;
    printf("Sum = %d\nAverage = %.2lf\n", sum, av);
    return 0;
}
