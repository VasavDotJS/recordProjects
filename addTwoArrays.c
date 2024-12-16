#include <stdio.h>
int main()
{
    int array1[30],array2[30],sumArray[30],i,limit;
    printf("Enter the Limit of the Arrays: ");
    scanf("%d",&limit);
    printf("Enter the Elements of the First Array\n");
    for(i=0;i<limit;i++)
    {
        printf("Enter Element[%d]: ",i);
        scanf("%d",&array1[i]);
    }
    printf("\nEnter the Elements of the Second Array\n");
    for(i=0;i<limit;i++)
    {
        printf("Enter Element[%d]: ",i);
        scanf("%d",&array2[i]);
    }
    printf("The Sum of both Arrays are \n");
    for(i=0;i<limit;i++)
    {
        sumArray[i]=array1[i]+array2[i];
        printf("\t%d,",sumArray[i]);
    }
    return 0;
}
