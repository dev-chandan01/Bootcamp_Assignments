// Write a recursive function to calculate sum of first N even natural numbers.
// Asignment_13, Que_3
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int sum_even_N (int);
int main()
{
int s,t;
printf("Enter the number: ");
scanf("%d",&s);
t=sum_even_N(s);
printf("%d",t);
return 0;
}

int sum_even_N (int n)
{
 if (n==1)
 return 2;
 return 2*n+sum_even_N(n-1);
}