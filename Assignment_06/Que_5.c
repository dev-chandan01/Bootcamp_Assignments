//  Write a program to calculate sum of cubes of first N natural numbers.
//  Asignment_6, Que_5
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i, j, s = 0;
    printf("How many times do you want to add the cube of natural numbers: ");
    scanf("%d", &j);
    for (i = 1; (i <= j); i++)
    {
        s = s + i * i * i;
    }
    printf("%d\n", s);
    return 0;
}