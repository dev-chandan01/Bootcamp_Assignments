//Write a recursive function to print first N terms of Fibonacci series.
// Asignment_13, Que_8
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int fib_N(int);
int main()
{
int s;
printf("Enter the number: ");
scanf("%d",&s);
for (int i = 0; i < s; i++)
printf("%d ",fib_N(i));
return 0;
}

int fib_N(int n)
{
   if (n==0||n==1)
   return(n);
   return fib_N(n-1)+fib_N(n-2);
}