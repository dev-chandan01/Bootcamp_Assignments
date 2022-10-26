//Program to convert a positive number into a negative number and negative
//number into a positive number using a switch statement.

//   Asignment_9, Que_8
//   Topic~ Switch Case Problem
//   Author~ Shree Chandan Samal
//   Date~ 13/08/2022
#include <stdio.h>
int main()
{
  int num,dum;
  printf("Enter a number: ");
  scanf("%d",&num);
 dum=num > 0;
switch (dum)
{
case 1:
    num=-num;
    printf("%d",num);
    break;
case 0:
    num=-num;
    printf("%d",num);
    break;
default:
    break;
}
return 0;
}