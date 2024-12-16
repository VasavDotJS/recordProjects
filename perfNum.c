#include <stdio.h>
int main()
{
    int num,i,divSum=0;
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            divSum=divSum+i;
        }
    }
    if(divSum==num)
    {
        printf("The Number %d is Perfect",num);
    }
    else
    {
        printf("The Number %d is NOT Perfect",num);
    }
    return 0;
}