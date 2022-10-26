// Write a program to check whether a given number is an even number or an odd number.
// Asignment_3, Que_3
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    (a%2==0)?printf("Even"):printf("Odd");
    return 0;
}