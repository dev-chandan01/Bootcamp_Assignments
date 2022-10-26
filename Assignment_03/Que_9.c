/* Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
// Asignment_3, Que_9
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Greatest number is: %d",a>b ? a>c ? a : c : b>c ? b : c);
    return 0;
}