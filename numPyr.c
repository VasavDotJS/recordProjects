#include <stdio.h>

int main() {
    int rows;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d\t", j); 
        }
        printf("\n"); 
    }
        for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d\t", j); 
        }
        printf("\n"); 
    }

    return 0;
}
