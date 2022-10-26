//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
// Asignment_11, Que_10
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
int fact_num (int);
int main()
{
    int i,sum=0;
   
    for ( i = 1; i <=5; i++)
    {
        sum=sum+fact_num(i)/i;
    }
    printf("%d",sum);
    return 0;
}


int fact_num (int x)
{
    int f=1;
   for (int i = 1; (i <= x); i++)
    {
        f = f * i;
    }
    return f;
}