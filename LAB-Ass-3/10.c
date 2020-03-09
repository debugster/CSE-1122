/*
* To determine palindrome or not
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int length, mid, i, j, is_palindrome = 1;
    printf("Enter a string : ");
    gets(s);
    length = strlen(s);
    mid = length / 2;
    for (i = 0, j = length - 1; i < mid; i++, j--) {
        if (s[i] != s[j]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1) {
        printf("%s is a palindrome\n", s);
    }
    else {
        printf("%s is not a palindrome\n", s);
    }
    return 0;
}

