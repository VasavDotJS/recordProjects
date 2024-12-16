#include <stdio.h>
int main()
{
    int num,dgt,sum=0;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("The Number %d in Words: ",num);
    while(num>0)
    {
        dgt=num%10;
        num=num/10;
        sum=sum*10+dgt;
    }
    while(sum>0)
    {
        dgt=sum%10;
        switch(dgt)
        {
            case 0:
                printf("Zero\t");break;
            case 1:
                printf("One\t");break;
            case 2:
                printf("Two\t");break;
            case 3:
                printf("Three\t");break;
            case 4:
                printf("Four\t");break;
            case 5:
                printf("Five\t");break;
            case 6:
                printf("Six\t");break;
            case 7:
                printf("Seven\t");break;
            case 8:
                printf("Eight\t");break;
            case 9:
                printf("Nine\t");break;
            default:
                printf("Invalid Number!");
        }
        sum=sum/10;
    }
    return 0;
}