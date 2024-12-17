#include <stdio.h>
int main() {
    int matrix[3][3],i, j, rowSum, colSum;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter Element[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nRow sums:\n");
    for (i = 0; i < 3; i++) {
        rowSum = 0; 
        for (j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }
    printf("\nColumn sums:\n");
    for (j = 0; j < 3; j++) {
        colSum = 0;
        for (i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }
    return 0;
}