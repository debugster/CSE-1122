#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int a[100];
    printf("How many numbers do you want to sort ? : ");
    scanf("%d", &n);
    printf("Enter %d values : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Before Sorting\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter Sorting\n");
    printf("Ascending :\t");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\nDescending :\t");
    for (i = n - 1; i >= 0; i--) {
        printf("%d\t", a[i]);
    }
    return 0;
}
