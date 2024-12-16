#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0.0;
    int n, terms;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);
    term = x;
    sum += term;

    for (n = 1; n < terms; n++) {
        long long fact = 1;
        for (int i = 1; i <= (2 * n + 1); i++) {
            fact *= i;
        }
        term = pow(-1, n) * pow(x, 2 * n + 1) / fact;
        sum += term;
    }
   printf("The approximate value of sin(%lf) is: %.10lf\n", x, sum);
    return 0;
}
