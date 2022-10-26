// Write a function to check whether a given number is even or odd. Return 1 if the 
//number is even, otherwise return 0. (TSRS)
// Asignment_10, Que_3
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
int Even_odd (int);
int main()
{
    int num,b;
    printf("Enter a number: ");
    scanf("%d",&num);
    b=Even_odd (num);
    if (b)
    printf("Even");
    else
    printf("odd");
    return 0;
    
}

int Even_odd (int dum)
{
   if (dum%2==0)
   return 1;
   else
   return 0;
   
}