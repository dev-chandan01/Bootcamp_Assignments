// Write a program to check whether a given number is a three-digit number or not.
// Asignment_3, Que_5
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    ((a<999)&&(a>99))?printf("given number is 3 digit"):printf("given number is not 3 digit");
    return 0;
}