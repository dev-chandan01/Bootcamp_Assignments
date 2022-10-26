// Write a recursive function to calculate sum of squares of first n natural numbers.
// Asignment_13, Que_4
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int sum_square_N(int);
int main()
{
int s,t;
printf("Enter the number: ");
scanf("%d",&s);
t=sum_square_N(s);
printf("%d",t);
return 0;
}

int sum_square_N(int n)
{
   if (n==1)
   return(1);
   return n*n+sum_square_N(n-1);
}
