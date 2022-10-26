// Write a program to find the second smallest number in an array.
// Take array values from the user.
//  Asignment_14, Que_8
//  Topic~ Array in C language
//  Author~ Shree Chandan Samal
//  Date~ 17/08/2022

#include <stdio.h>
void max_arr(int[]);
int main()
{
    int a[10];
    max_arr(a);
    return 0;
}

void max_arr(int b[])
{
    int max, s_max;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
        max = b[0];
        for (int i = 0; i < 10; i++)
        {
            if (max > b[i])
            {
                s_max = max;
                max = b[i];
            }
        }
    }
    printf("%d", s_max);
}