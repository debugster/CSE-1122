#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i;
    printf("Enter an string : ");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String 1 : %s\nString 2 : %s\n", s1, s2);
    return 0;
}
