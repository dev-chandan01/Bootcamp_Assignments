// Write a function to calculate the factorial of a number. (TSRS)
// Asignment_10, Que_6
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
int fact_num (int);
int main()
{
int num,a;
printf("Enter the number: ");
scanf("%d",&num);
a=fact_num(num);
printf("Factorial is: %d",a);
return 0;
}

int fact_num (int x)
{
    int f=1;
   for (int i = 1; (i <= x); i++)
    {
        f = f * i;
    }
    return f;
}
