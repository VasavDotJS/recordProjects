#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, words = 1, vowels = 0, capitals = 0, smalls = 0, spaces = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
            if (str[i + 1] != ' ' && str[i + 1] != '\0') {
                words++;
            }} 
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            capitals++;
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            }} 
        else if (str[i] >= 'a' && str[i] <= 'z') {
            smalls++;
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                vowels++;
            }}
    }
    printf("Number of words: %d\n", words);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of capital letters: %d\n", capitals);
    printf("Number of small letters: %d\n", smalls);
    printf("Number of spaces: %d\n", spaces);
    return 0;
}