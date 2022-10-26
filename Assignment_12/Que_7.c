//Write a recursive function to print squares of first N natural numbers.
// Asignment_12, Que_7
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022
#include <stdio.h>
void square_N (int);
int main()
{
int s;
printf("Enter the nth term: ");
scanf("%d",&s);
square_N(s);
return 0;
}

void square_N (int n)
{
if (n>0)
  {
    square_N(n-1);
    printf("%d,",n*n);
  }
}