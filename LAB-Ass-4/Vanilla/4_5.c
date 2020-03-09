#include <stdio.h>

int main()
{
    int row, col, i, j, sum;
    int a[10][10], b[10][10], c[10][10];
    printf("Number of rows : ");
    scanf("%d", &row);
    printf("Number of columns : ");
    scanf("%d", &col);

    printf("Enter %d values for Table A : ", row * col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d values for Table B : ", row * col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("A + B\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
