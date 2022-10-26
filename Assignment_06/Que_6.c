//  Write a program to calculate factorial of a number.
//  Asignment_6, Que_6
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i, j, s = 1;
    printf("Enter a numbers(For sum of factorial): ");
    scanf("%d", &j);
    for (i = 1; (i <= j); i++)
    {
        s = s * i;
    }
    printf("%d\n", s);
    return 0;
}