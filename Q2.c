/*Write a C program to input a string and convert it in toggle case.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// A function to convert a string to toggle case
void toggleCase(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (char)((int)str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("%s\n", str);
}
// Driver program to test above function
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    toggleCase(str);
    return 0;
}
