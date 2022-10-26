//  Write a program to input a three-digit number and display the sum of the digits.
//  Asignment_2, Que_5
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 3 digit number: ");
    scanf("%d",&n);
    printf("Sum is: %d\n",n/100+n/10%10+n%10);
    return 0;
}