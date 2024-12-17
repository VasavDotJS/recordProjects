#include <stdio.h>
#include <string.h>
int main()
{
    char string[100],rev[100];
    printf("Enter the String: ");
    gets(string);
    strcpy(rev,string);
    strrev(rev);
    if(strcmp(rev,string)==0)
    {
        printf("The String is Palindrome!\n");
    }
    else{
        printf("The String is NOT Palindrome!");
    }
    return 0;
}