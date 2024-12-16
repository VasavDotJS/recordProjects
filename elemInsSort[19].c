#include <stdio.h>
int main() {
    int arr[20] = {1, 3, 5, 7, 9, 11};
    int n = 6, i, elem, pos;  
    printf("[");
    for(i=0;i<=5;i++)
    {
        printf("%d\t",arr[i]);
    }printf("]\n");
    printf("Enter the element to insert: ");
    scanf("%d", &elem);
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > elem) {
            break;
        }
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    n++;
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}