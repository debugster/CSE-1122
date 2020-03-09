/*
* Conversion of string characters into opposite case
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    int length, i;
    printf("Enter a string : ");
    gets(s);
    length = strlen(s);
    for (i = 0; i < length; i++) {
        if (islower(s[i])) {
            putchar(toupper(s[i]));
        }
        else {
            putchar(tolower(s[i]));
        }
    }
    printf("\n");
    return 0;
}
