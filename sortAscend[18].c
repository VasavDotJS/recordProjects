#include <stdio.h>
int main() {
    int num,i,j,temp,arr[50];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("Enter Element[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
