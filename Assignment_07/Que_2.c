//  Write a program to print first N terms of Fibonacci series.
//  Asignment_7, Que_2
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
   int N, i, a = -1, b = 1, c;
   printf("Enter a number ");
   scanf("%d", &N);
   for (i = 1; i <= N; i++)
   {
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
   }
   return 0;
}