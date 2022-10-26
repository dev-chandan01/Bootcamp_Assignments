// Write a recursive function to calculate factorial of a given number.
// Asignment_13, Que_6
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int fact_N(int);
int main()
{
int s,t;
printf("Enter the number: ");
scanf("%d",&s);
t=fact_N(s);
printf("%d",t);
return 0;
}

int fact_N(int n)
{
   if (n==0||n==1)
   return(1);
   return n*fact_N(n-1);
}
