//Program to Convert even number into its upper nearest odd number Switch Statement.

//   Asignment_9, Que_9
//   Topic~ Switch Case Problem
//   Author~ Shree Chandan Samal
//   Date~ 13/08/2022
#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  
  switch (num%2==0)
  {
  case 1:
    printf("%d",num+1);
    break;
  case 0:
    printf("Entered number is not a even number");
    break;
  }
  return 0;
}