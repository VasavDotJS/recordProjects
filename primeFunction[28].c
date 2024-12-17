#include <stdio.h>
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            flag++;
            break;
        }
        else{
            flag=0;
        }
    }
    return flag;
}
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(prime(num)==0) {
        printf("%d is a Prime Number\n",num);
    }
    else{
        printf("%d is Not a Prime Number",num);
    }
    return 0;
}