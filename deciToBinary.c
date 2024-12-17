#include <stdio.h>
int main() {
    int decimal, binary[32], index = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binary[index] = decimal % 2; 
        decimal = decimal / 2; 
        index++;
    }
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
