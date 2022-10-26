// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
// Asignment_14, Que_2
// Topic~ Array in C language
// Author~ Shree Chandan Samal
// Date~ 17/08/2022

#include <stdio.h>
int avg_arr(int []);
int main()
{
int b[10];
printf("Avarage of the 10 value is: %d",avg_arr(b));
return 0;
}


int avg_arr(int a[])
{
int sum=0;
float avg;
 printf("Enter 10 numbers: ");
 for (int i = 0; i < 10; i++)
 {
  scanf("%d",&a[i]);
  sum+=a[i];
  avg=sum/10;
  }
 return avg;
}