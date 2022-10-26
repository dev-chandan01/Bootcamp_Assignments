//  Write a program to find the position of first 1 in LSB.
//  Asignment_2, Que_7
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int x, result = 0, count = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    //for less code i use while loop.
    while(x!=0)
    {
    result = x & 1;
    count++;
    if (result == 1)
    {
        printf("position of first 1 in LSB: %d", count);
        break;
    }
    x=x>>1;
    }
    return 0;
}