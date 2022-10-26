//  Write a program to print greater between two numbers. Print one number of both are the same.
// Asignment_3, Que_6
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    (a==b) ? printf("Two numbers are same") :(a > b)? printf("a is greater than b"):printf("b is greater than a");
    return 0;
}