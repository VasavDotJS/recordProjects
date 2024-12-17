#include <stdio.h>
double factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("The Factorial of %d is: %.2lf\n",num,factorial(num));
    return 0;
}