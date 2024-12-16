#include <stdio.h>
int main()
{
    int num1,num2,gcd,lcm,i;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    lcm=num1*num2/gcd;
    printf("LCM of %d and %d : %d\n",num1,num2,lcm);
    printf("GCD of %d and %d : %d\n",num1,num2,gcd);
    return 0;
}