#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*void main()
{
    char p[100];
    printf("Enter a string: ");
    scanf("%[^\n]", p);
    printf("The string is %s", p);
}*/
/*void main()
{
    char p[]=scanf("%[^\n]",p);
    printf("The string is %s", p);
}*/
void main()
{
    char p[100]="hello";
    char q[100];
    strcpy(q,p);
    printf("The string is %s", q);
}