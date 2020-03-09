#include <stdio.h>

int main()
{
    int row, col, i, j;
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
    printf("Matrix after interchanging rows and columns by each other\n");
    for (j = 0; j < col; j++) {
        for (i = 0; i < row; i++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
