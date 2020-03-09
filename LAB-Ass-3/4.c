/*
* Find sum and average of the series :
* 1 + 4 + 7 + ... + n
*/


#include <stdio.h>

int main()
{
    int n, i, sum = 0, count = 0;
    double av;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 3) {
        sum += i;
        count++;
    }
    av = (double) sum / count;
    printf("Sum = %d\nAverage = %.2lf\n", sum, av);
    return 0;
}
