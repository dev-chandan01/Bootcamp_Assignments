//Write a program to read and display a 2D array of strings in C language.
// Asignment_19, Que_3
// Topic~ Handling multiple String in C language
// Author~ Shree Chandan Samal
// Date~ 03/09/2022

#include <stdio.h>
int main()
{
    char a[4][20];
    int i;
    printf("Enter 3 strings: ");
    for ( i = 0; i <= 3; i++)
    {
        fgets(a[i],20,stdin);
    }
    for (i = 0; i <= 3; i++)
    {
        printf("%s",a[i]);
    }
    return 0;
}