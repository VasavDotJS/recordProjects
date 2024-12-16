#include <stdio.h>
int main()
{
    int array[40], elemPos = -1, i, limit, elem;

    printf("Enter the Limit of the Arrays: ");
    scanf("%d", &limit);

    printf("Enter the Elements of the Array: \n");
    for (i = 0; i < limit; i++)
    {
        printf("Enter Element[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nEnter the Element You Want to Locate: ");
    scanf("%d", &elem);

    for (i = 0; i < limit; i++)
    {
        if (array[i] == elem)
        {
            elemPos = i;
            break;
        }
    }

    if (elemPos != -1)
    {
        printf("The Location of %d in the Array: %d\n", elem, elemPos);
    }
    else
    {
        printf("The Element %d is not present in the Array.\n", elem);
    }
    return 0;
}