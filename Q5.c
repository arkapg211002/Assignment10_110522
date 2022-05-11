/*Write a C program to count the number of vowels and consonants in a given string. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// A function to count the number of vowels and consonants in a given string
void countVowelsConsonants(char str[])
{
    int i, vowels = 0, consonants = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
}
// Driver program to test above function
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    countVowelsConsonants(str);
    return 0;
}
