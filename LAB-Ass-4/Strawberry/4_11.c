#include <stdio.h>

int main()
{
    char s1[100], s2[100], c;
    FILE *fp;
    printf("Enter an string : ");
    gets(s1);
    fp = fopen("TEST.DAT", "w");
    fprintf(fp, "%s", s1);
    fclose(fp);

    printf("Reading from file:\n");
    fp = fopen("TEST.DAT", "r");
    fscanf(fp, "%c", &c);
    while (!feof(fp)) {
        putchar(c);
        fscanf(fp, "%c", &c);
    }

    fclose(fp);

    return 0;
}
