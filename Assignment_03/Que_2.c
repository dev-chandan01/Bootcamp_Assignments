// Write a program to check whether a given number is divisible by 5 or not.
// Asignment_3, Que_2
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    (a%5==0)?printf("Divisible"):printf("Not divisible");
    return 0;
}