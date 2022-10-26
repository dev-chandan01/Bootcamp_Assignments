//Write a program in C to find the square of any number using the function
// Asignment_11, Que_9
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
void square_fun (int);
int main()
{
 int num;
 printf("Enter a number: ");
 scanf("%d",&num);
 square_fun (num);
 return 0;
}

void square_fun (int x)
{
 int s=x*x;
 printf("Square of %d is: %d",x,s);
}