// Write a function to print first N terms of Fibonacci series (TSRN)
// Asignment_11, Que_7
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
void fibo_series_fun (int);
int main()
{
    int s;
 printf("Enter a Nth term:");
 scanf("%d",&s);
 fibo_series_fun (s);
 return 0;
}

void fibo_series_fun (int N)
{
  int i,c,a = -1, b = 1;
 for (i = 1; i <= N; i++)
   {
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
   }

}