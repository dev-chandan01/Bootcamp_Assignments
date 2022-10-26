// Write a recursive function to print first N even natural numbers
// Asignment_12, Que_5
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
void print_even_N (int);
int main()
{
int s;
printf("Enter the number ");
scanf("%d",&s);
print_even_N(s);
return 0;
}

void print_even_N (int n)
{
 if (n>0)
  {
    print_even_N(n-1);
    printf("%d,",2*n);
    
  }
}