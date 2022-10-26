/*  Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and
    digit=9 then the resulting number is 2349)*/
//  Asignment_2, Que_11
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a number and a digit ");
    scanf("%d%d", &x,&y);
    x*=10;
    x+=y;
    printf("result: %d", x);
    return 0;
}