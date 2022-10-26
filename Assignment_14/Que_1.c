// Write a program to calculate the sum of numbers stored in an array of size 10.
// Take array values from the user.
// Asignment_14, Que_1
// Topic~ Array in C language
// Author~ Shree Chandan Samal
// Date~ 17/08/2022

#include <stdio.h>
int sum_arr(int []);
int main()
{
int a[10]; 
printf("Sum of 10 number is: %d",sum_arr(a));
return 0;
}

int sum_arr(int b[])
{
 int sum=0;
 printf("Enter 10 numbers: ");
 for (int i = 0; i < 9; i++)
 {
  scanf("%d",&b[i]);
  sum=sum+b[i];
  }
 return sum;
}