#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int v;
    printf("Enter an string : ");
    fflush(stdin);
    gets(s1);
    printf("Enter another string : ");
    fflush(stdin);
    gets(s2);
    v = strcmp(s1, s2);
    if (v == 0) {
        printf("Both strings are equal\n");
    }
    else if (v < 0) {
        printf("%s is greater than %s\n", s2, s1);
    }
    else {
        printf("%s is greater than %s\n", s1, s2);
    }
    return 0;
}
