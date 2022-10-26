//  Write a recursive function to print first N natural numbers.
// Asignment_12, Que_1
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
void printN(int);
int main()
{
int s;
printf("Enter the number: ");
scanf("%d",&s);
printN(s);
return 0;
}

void printN(int n)
{
   if (n>0)
  {
    printN(n-1);
    printf("%d,",n);
  }
  
}