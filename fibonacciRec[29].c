#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int num, i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);
    printf("Fibonacci Series: ");
    for (i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
