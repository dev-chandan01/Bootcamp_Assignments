// Write a program to print cubes of the first N natural numbers.
//  Asignment_5, Que_9
//  Topic~ More on Iterative Control Statements
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    printf("How many times do you want to print the cube of even natural numbers: ");
    scanf("%d", &j);
    for (i = 1; (i <= j); i++)
    {
        printf("%d\n", i * i * i);
    }
    return 0;
}