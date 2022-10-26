//Write a recursive function to print binary of a given decimal number.
// Asignment_12, Que_8
// Topic~ Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022
#include <stdio.h>
void check_bin_dec (int);
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
check_bin_dec (a);
return 0;
}
void check_bin_dec (int n)
{
    if (n>0)
    {
    check_bin_dec(n/2);
    printf("%d",n%2); 
    }
}
