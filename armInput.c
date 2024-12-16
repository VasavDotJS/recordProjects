#include <stdio.h>
#include <math.h>
int main()
{
    int num,temp,dgt,sup,qbsum=0;
    inp:
    printf("Enter the Number: ");
    scanf("%d",&num);
    temp=num;
    if(num<10)
    {
        sup=1;  //If num less than 10,superscript is 1
    }
    else if(num>=10 &&num<100)
    {
        sup=2;  //If num less than 100,superscript is 2
    }
    else if(num>=100 &&num<1000)
    {
        sup=3;  //If num less than 1000,superscript is 3
    }
    else
    {
        goto inp;   //If num greater than 1000, program jumps back to Reentering
    }
    while(num>0)
    {
        dgt=num%10; //Extracts the last digit of the Number 
        qbsum=pow(dgt,sup)+qbsum;    //Finds the sum of the extracted powers
        num=num/10;
    }
    if(qbsum==temp)
    {
        printf("The Number %d is Armstrong",temp);
    }
    else
    {
        printf("The Number %d is NOT Armstrong",temp);
    }
    return 0;
}