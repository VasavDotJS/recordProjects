#include <stdio.h>
int main()
{
    int sum=0,num,dgt,temp;
    printf("Enter the Number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        dgt=num%10;
        sum=sum+dgt;
        num=num/10;
    }
    printf("The Sum of the Digits of the Number %d is %d",temp,sum);
    return 0;
}