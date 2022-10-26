//  Write a program to calculate sum of first N odd natural numbers.
//  Asignment_6, Que_3
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{//this is a simple method for sum of N odd number..
 //   int s,n;
 // printf("Enter the number for (sum of odd): ");
 // scanf("%d", &n);
 // s=n*n;
 // printf("%d",s);
  
  //But as the question mention we have to use the loop..
    int i, j, s=0;
  printf("Enter the number for (sum of odd): ");
  scanf("%d", &j);
  for (i = 1; (i <= j); i++)
  {
    s=s+2*i-1;
  }
  printf("%d\n",s);
  return 0;
}