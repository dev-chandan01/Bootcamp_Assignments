//Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
// Asignment_14, Que_3
// Topic~ Array in C language
// Author~ Shree Chandan Samal
// Date~ 17/08/2022

#include <stdio.h>
void sum_o_e_arr(int []);
int main()
{
int a[10]; 
sum_o_e_arr(a);
return 0;
}

void sum_o_e_arr(int b[])
{
 int sum=0,se=0,so=0;
 printf("Enter 10 numbers: ");
 for (int i = 0; i < 10; i++)
 {
  scanf("%d",&b[i]);
  if (b[i]%2==0)
  se=se+b[i];
  else
  so=so+b[i];
 }
 printf("Sum of the even number is: %d",se);
 printf("Sum of the odd number is: %d",so);
}