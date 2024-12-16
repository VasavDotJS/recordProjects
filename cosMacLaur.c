#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 1.0;
    int n, terms;

    // Taking input for x (in radians) and number of terms to approximate
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    // Calculating cos(x) using the series
    term = 1.0;  // The first term is 1
    for (n = 1; n < terms; n++) {
        // Calculate the nth term: (-1)^n * x^(2n) / (2n)!
        double power = 1.0;
        double fact = 1.0;
        
        // Calculate x^(2n) and (2n)!
        for (int i = 1; i <= 2 * n; i++) {
            power *= x;    // Compute x^(2n)
            fact *= i;     // Compute (2n)!
        }

        term = pow(-1, n) * power / fact;  // Calculate the nth term
        sum += term; 
        }
    printf("The approximate value of cos(%lf) is: %.10lf\n", x, sum);

    return 0;
}
