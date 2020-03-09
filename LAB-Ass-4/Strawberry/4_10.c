#include <stdio.h>
#include <string.h>

struct member {
    char name[20];
    char address[100];
} temp, m[50];

int main()
{
    int n, i, j, value;
    printf("Number of members : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter info for member no. %d\n", i + 1);
        printf("Name : ");
        fflush(stdin);
        gets(m[i].name);
        printf("Address : ");
        fflush(stdin);
        gets(m[i].address);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            value = strcmp(m[i].name, m[j].name);
            if (value > 0) {
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }

    printf("\n\nAlphabetized List\n");
    for (i = 0; i < n; i++) {
        printf("Name : %s\n", m[i].name);
        printf("Address : %s\n", m[i].address);
    }
    return 0;
}
