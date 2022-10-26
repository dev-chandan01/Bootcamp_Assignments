//Write a recursive function to print binary of a given octal number.
// Asignment_12, Que_9
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022
#include <stdio.h>
void check_bin_oct (int);
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
check_bin_oct (a);
return 0;
}
void check_bin_oct (int n)
{
  if (n>0)
  {
  check_bin_oct(n/8);
  printf("%d",n%8); 
  }
}
