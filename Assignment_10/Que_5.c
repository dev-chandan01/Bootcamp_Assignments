// Write a function to print first N odd natural numbers. (TSRN)
// Asignment_10, Que_5
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
void odd_num (int);
int main()
{
 int a;
 printf("Enter the number: ");
 scanf("%d",&a);
 odd_num(a);
 return 0;
}
void odd_num (int x)
{
  for (int i = 1; i <= x; i++)
  {
    if (i%2)
    printf("%d\n",i);
  }
}