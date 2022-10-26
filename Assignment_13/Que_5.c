// Write a recursive function to calculate sum of digits of a given number.
// Asignment_13, Que_5
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int sum_digits_N(int);
int main()
{
int s,t;
printf("Enter the number: ");
scanf("%d",&s);
t=sum_digits_N(s);
printf("%d",t);
return 0;
}

int sum_digits_N(int n)
{
   if (n==0)
   return(0);
   return n%10+sum_digits_N(n/10);
}
