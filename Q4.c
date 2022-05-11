/*Write a C program to concatenate two strings without using library function.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// A function to concatenate two strings
void concat(char str1[], char str2[])
{
    int i, j;
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++, i++)
        str1[i] = str2[j];
    str1[i] = '\0';
}
// Driver program to test above function
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    fflush(stdin);
    printf("Enter second string: ");
    scanf("%[^\n]", str2);
    concat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
