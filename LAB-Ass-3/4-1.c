/*
* Find sum and average up to nth value of the series :
* 1 + 4 + 7 + ...
*/


#include <stdio.h>

int main()
{
    int n, i, sum = 0, count;
    double av;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = 1, count = 1; count <= n; i += 3, count++) {
        sum += i;
    }
    av = (double) sum / n;
    printf("Sum = %d\nAverage = %.2lf\n", sum, av);
    return 0;
}

