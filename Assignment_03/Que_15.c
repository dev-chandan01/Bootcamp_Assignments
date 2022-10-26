// Write a program to check whether a given number is positive, negative or zero.
// Asignment_3, Que_15
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Input number is 0");
    }
    else
    {
        if (a>0)
        {
            printf("Input number is Positive");
        }
        else
           printf("Input number is negetive");
    }

    return 0;
}