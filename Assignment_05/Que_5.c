// Write a program to print the first N odd natural numbers in reverse order.
//  Asignment_5, Que_5
//  Topic~ More on Iterative Control Statements
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
  int i, j;
  printf("How many times do you want to print odd natural numbers in reverse: ");
  scanf("%d", &j);
  for (i = j; (i >= 1); i--)
  {
    printf("%d\n", 2 * i - 1);
  }
  return 0;
}