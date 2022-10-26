// Write a program to print MySirG N times on the screen.
//  Asignment_5, Que_1
//  Topic~ More on Iterative Control Statements
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    printf("How many times do you want to print MySirG: ");
    scanf("%d", &j);
    for (i = 0; i < j; i++)
    {
        printf("MySirG\n");
    }
    return 0;
}