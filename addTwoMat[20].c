#include <stdio.h>
int main() {
    int i, j,matrix1[3][3],matrix2[3][3],result[3][3];
    printf("Enter elements for first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter Element[%d][%d]: ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements for second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter Element[%d][%d]: ",i,j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\t%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}