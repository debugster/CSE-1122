#include <stdio.h>

int main()
{
    int row, col, i, j, sum;
    int a[50][50];
    printf("Number of rows : ");
    scanf("%d", &row);
    printf("Number of columns : ");
    scanf("%d", &col);

    printf("Enter %d values : ", row * col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original Matrix\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Original Matrix with rows and columns sum\n");
    for (i = 0; i < row; i++) {
        sum = 0;
        for (j = 0; j < col; j++) {
            sum = sum + a[i][j];
            printf("%3d ", a[i][j]);
        }
        printf("%3d\n", sum);
    }

    for (j = 0; j < col; j++) {
        sum = 0;
        for (i = 0; i < row; i++) {
            sum = sum + a[i][j];
        }
        printf("%3d ", sum);
    }
    return 0;
}
