//Write a function to check whether a given number contains a given digit or not. (TSRS)
// Asignment_10, Que_9
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
int check_num(int,int);
int main()
{
int a,b,s;
printf("Enter a number and a digit: ");
scanf("%d%d",&a,&b);
s=check_num(a,b);
if (s)
  printf("yes the digit is present in the number");
  else
  printf("No the digit is not present in the number");
  return 0;

}

int check_num(int n, int d)
{
    int rem;
    while (n)
    {
      rem=n%10;
      if (rem==d)
      return 1;
      n=n/10;
    }
    return 0;
}