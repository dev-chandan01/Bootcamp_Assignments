// Write a program to print a given number without its last digit.
// Asignment_2, Que_2
// Topic~ Operators In C Language
// Author~ Shree Chandan Samal
// Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Without last digit: %d\n", num / 10);
    return 0;
}