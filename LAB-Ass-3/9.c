/*
* Encoding
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
        if (isalpha(s[i])) {
            if (s[i] == 'z') {
                putchar('a');
            }
            else if (s[i] == 'Z') {
                putchar('A');
            }
            else {
                putchar(s[i] + 1);
            }
        }
        else if (isdigit(s[i])) {
            if (s[i] == '9') {
                putchar('0');
            }
            else {
                putchar(s[i] + 1);
            }
        }
        else {
            putchar('*');
        }
    }
    printf("\n");
    return 0;
}
