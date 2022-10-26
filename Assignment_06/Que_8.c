// Write a program to check whether a given number is a Prime number or not.
//  Asignment_6, Que_8
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    // int x, i;
    // printf("enter a number: ");
    // scanf("%d", &x);
    // for (i = 2; i <= x - 1; i++)
    //     if (x % i == 0)
    //         break;
    // when i == x,that means the loop run successfully.
    //  if not that means the loop didn't run successfully and [break; occur]
    // if (i == x)
    //     printf("%d is a prime number", x);
    // else
    //     printf("%d is not a prime number", x);

    ////////////another method//////////
    int x, i, flag = 0;
    printf("enter a number: ");
    scanf("%d", &x);
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
            flag = 1;
    }
    if (flag == 0)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}