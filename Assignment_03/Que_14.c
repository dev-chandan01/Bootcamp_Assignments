// Write a program to check whether a given number is divisible by 7 or divisible by 3.
// Asignment_3, Que_14
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
        printf("%d is divisible by 3 and 7", a);
    }
    else{
        if (a % 3 == 0)
        {
            printf("%d is divisible by 3", a);
        }
        else
        {
            if (a % 7 == 0)
            {
                printf("%d is divisible by 7", a);
            }
            else
                printf("%d can't be divisible by 7 or 3", a);
        }
    }

    return 0;
}