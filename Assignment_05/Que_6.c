// Write a program to print the first N even natural numbers.
//  Asignment_5, Que_6
//  Topic~ More on Iterative Control Statements
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
  int i, j;
  printf("How many times do you want to print even natural numbers: ");
  scanf("%d", &j);
  for (i = 1; (i <= j); i++)
  {
    printf("%d\n", 2 * i);
  }
  return 0;
}