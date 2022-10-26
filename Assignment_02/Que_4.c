// Write a program to swap values of two int variables without using a third variable.
//  Asignment_2, Que_4
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the two number, num1 and num2 respectively: ");
    scanf("%d%d", &num1, &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Swapped number, num1: %d and num2: %d\n", num1, num2);
    return 0;
}