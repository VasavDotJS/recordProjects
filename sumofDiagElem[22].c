#include <stdio.h>
int main() {
    int matrix[3][3], i, j,primarySum = 0, secondarySum = 0;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][2 - i];
    }
    printf("\nThe sum of the primary diagonal elements is: %d\n", primarySum);
    printf("The sum of the secondary diagonal elements is: %d\n", secondarySum);
    return 0;
}