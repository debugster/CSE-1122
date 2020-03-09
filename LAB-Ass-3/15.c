#include <stdio.h>

void reverse();

int main()
{
    printf("Enter a string : ");
    reverse();
    return 0;
}

void reverse()
{
    char c;
    if ((c = getchar()) != '\n') {
        reverse();
    }
    putchar(c);
}
