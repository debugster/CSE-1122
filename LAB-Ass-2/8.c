/*
* Program to determine vowel and consonant
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character : ");
    c = getchar();
    if (isalpha(c)) {
        // input is OK
    }
    else {
        // input is not a letter
        printf("%c is not a letter\n");
        return;
    }

    switch (tolower(c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is vowel\n", c);
            break;
        default:
            printf("%c is consonant\n", c);
            break;
    }
    return 0;
}
