// Write a recursive function to print first N natural numbers in reverse order.
// Asignment_12, Que_2
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
void print_rev_N (int);
int main()
{
int s;
printf("Enter the number: ");
scanf("%d",&s);
print_rev_N (s);
return 0;
}

void print_rev_N (int n)
{
    if (n>0)
  {
    printf("%d,",n);
    print_rev_N(n-1);
    
  }
}