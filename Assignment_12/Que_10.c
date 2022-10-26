// Write a recursive function to print reverse of a given number.
// Asignment_12, Que_10
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022
#include <stdio.h>
void rev_num (int);
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
rev_num (a);
return 0;
}
void rev_num (int n)
{
    if (n>0)
    {
    printf("%d",n%10);
    rev_num(n/10);
    }
}
