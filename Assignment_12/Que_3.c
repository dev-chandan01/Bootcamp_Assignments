// Write a recursive function to print first N odd natural number.
// Asignment_12, Que_3
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
void print_odd_N (int);
int main()
{
int s;
printf("Enter the number: ");
scanf("%d",&s);
print_odd_N(s);
return 0;
}

void print_odd_N (int n)
{
 if (n>0)
  {
    print_odd_N(n-1);
    printf("%d,",2*n-1);
    }
}