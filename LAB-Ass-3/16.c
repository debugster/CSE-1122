/*
* To determine prime and non-prime
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, root, is_prime = 1;
    printf("Enter an integer : ");
    scanf("%d", &n);
    root = sqrt(n);
    for (i = 2; i <= root; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (n != 1 && is_prime == 1) {
        printf("%d is a prime number\n", n);
    }
    else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
