//Write a recursive function to calculate sum of first N odd natural numbers.
// Asignment_13, Que_2
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int sum_odd_N (int);
int main()
{
int s,t;
printf("Enter the number: ");
scanf("%d",&s);
t=sum_odd_N(s);
printf("%d",t);
return 0;
}

int sum_odd_N (int n)
{
 if (n==1)
 return 1;
 return 2*n-1+sum_odd_N(n-1);
}