/*Write a C program to find frequency of given character in a string */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// A function to find frequency of given character in a string
void frequency(char str[], char ch)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }
    printf("Frequency of %c is %d\n", ch, count);
}
// Driver program to test above function
int main()
{
    char str[100];
    char ch;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    fflush(stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);
    frequency(str, ch);
    return 0;
}
