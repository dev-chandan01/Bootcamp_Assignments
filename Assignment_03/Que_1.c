// Write a program to check whether a given number is positive or non-positive.
// Asignment_3, Que_1
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    (a>0)?printf("positive"):printf("non-positive");
    return 0;
}