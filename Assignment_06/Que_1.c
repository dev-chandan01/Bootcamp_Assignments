// Write a program to calculate sum of first N natural numbers.
//  Asignment_6, Que_1
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i, j, s ;
    printf("enter the number: ");
    scanf("%d", &j);
    for (i = 1,s = 0; i <= j; i++)
    {
        s = s + i;
    }
    printf("Sum of the number: %d", s);
    return 0;
}
