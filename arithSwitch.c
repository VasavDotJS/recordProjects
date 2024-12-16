#include <stdio.h>
int main()
{
    int num1,num2;
    char val;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);
    operator:
    printf("Enter the Arithmetic Operation(+,-,/,*)");
    scanf("%c",&val);
    switch(val)
    {
        case '+':
            printf("\t%d + %d = %d",num1,num2,num1+num2);break;
        case '-':
            printf("\t%d - %d = %d",num1,num2,num1-num2);break;
        case '/':
            printf("\t%d / %d = %d",num1,num2,num1/num2);break;
        case '*':
            printf("\t%d * %d = %d",num1,num2,num1*num2);break;
        default:
            printf("The Operator Enterred is Invalid! Try Again: ");
            goto operator;
    }
    return 0;
}