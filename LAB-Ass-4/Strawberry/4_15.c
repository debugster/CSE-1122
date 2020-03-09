#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int i, j, Len;
    printf("Enter an string : ");
    gets(s1);
    Len = strlen(s1);
    for (i = Len - 1, j = 0; j < Len; i--, j++) {
        s2[j] = s1[i];
    }
    s2[j] = '\0';
    printf("Original string : %s\nReversed string : %s\n", s1, s2);
    return 0;
}
