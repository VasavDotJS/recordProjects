#include <stdio.h>

int main() {
    int i, j, rows;
    printf("Enter the Number of Rows: ");
    scanf("%d", &rows);
    printf("\n\n");
    for(i = 1; i <= rows; i++) {
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2*i - 1); j++) {
            if(j % 2 != 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
