//Write a function to check whether a given number is Prime or not. (TSRS)
// Asignment_11, Que_3
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
int prime_fun (int);
int main()
{
  int a,s;
  printf("Enter a number: ");
  scanf("%d",&a);
  s=prime_fun (a);
  if (s)
  printf("Prime number");
  else
  printf("Not a prime number");
  return 0;
}

int prime_fun (int x)
{
   int flag=0;
   for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
            flag = 1;
    }
    if (flag == 0)
        return 1;
    else
        return 0;
 
}