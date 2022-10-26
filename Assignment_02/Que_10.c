// Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
//  Asignment_2, Que_10
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{   
    //user input x=123;
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    x/=10;
    x*=10;
    printf("result: %d", x);
    return 0;
}