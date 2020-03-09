/*
* Program to convert uppercase letter into lowercase letter and vice versa
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character : ");
    c = getchar();
    if (islower(c)) {
        printf("%c is converted into uppercase : %c\n", c, toupper(c));
    }
    else if (isupper(c)) {
        printf("%c is converted into lowercase : %c\n", c, tolower(c));
    }
    else {
        printf("It is not a letter\n");
    }
    return 0;
}
