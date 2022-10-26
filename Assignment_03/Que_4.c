/*  Write a program to check whether a given number is 
an even number or an odd number without using % operator.*/
// Asignment_3, Que_4
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    /*logic is first devide the number which is given by user
    with 2 and multiply it by 2. if result is same then even else odd. */
    ((a / 2) * 2 == a) ? printf("Even") : printf("Odd");
    return 0;
}