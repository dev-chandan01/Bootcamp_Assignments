//Write a program in C to count the digits of a given number using recursion.
// Asignment_13, Que_9
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int count_digit(int);
int main()
{
int s;
printf("Enter the number: ");
scanf("%d",&s);
for (int i = 0; i < s; i++)
printf("%d ",count_digit(i));
return 0;
}

int count_digit(int n)
{
   if (n>0)
   return(0);
   return count_digit(n);
}