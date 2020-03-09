/*
* To calculate factorial of n without recursion
*/

#include <stdio.h>

int main()
{
    unsigned long long n, i, fact = 1;
    printf("Enter the value of n : ");
    scanf("%llu", &n);
    for (i = n; i >= 1; i--) {
        fact *= i;
    }
    printf("%llu! = %llu\n", n, fact);
    return 0;
}
