// Write a program to print unit digit of a given number.
// Asignment_2, Que_1
// Topic~ Operators In C Language
// Author~ Shree Chandan Samal
// Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Unit digit of %d is: %d\n", num, num % 10);
    return 0;
}