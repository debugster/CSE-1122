#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n, f;
    printf("nth Fibonacci number will be printed. value of n : ");
    scanf("%d", &n);
    f = fibonacci(n);
    printf("The %dth Fibonacci number is %d\n", n, f);
    return 0;
}

int fibonacci(int n)
{
    int f;
    if (n > 2) {
        f = fibonacci(n - 1) + fibonacci(n - 2);
    }
    else {
        f = 1;
    }
    return f;
}
