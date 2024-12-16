#include <stdio.h>
#include <limits.h>
int main() {
    int n,i,largest,second_largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array: \n", n);
    for ( i = 0; i < n; i++) {
        printf("Enter Element #%d: ",i);
        scanf("%d", &arr[i]);
    }
    largest = INT_MIN, second_largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if (second_largest != INT_MIN) {
        printf("Largest element: %d\n", largest);
        printf("Second largest element: %d\n", second_largest);
    } else {
        printf("No second largest element.\n");
    }
    return 0;
}