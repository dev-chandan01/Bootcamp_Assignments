//Convert the following if-else-if construct into switch case:
//if(var == 1)
//System.out.println("good");
//else if(var == 2)
//System.out.println("better");
//else if(var == 3)
//System.out.println("best");
//else
//System.out.println("invalid");

//   Asignment_9, Que_5
//   Topic~ Switch Case Problem
//   Author~ Shree Chandan Samal
//   Date~ 13/08/2022
#include <stdio.h>
int main()
{
  int var;
  printf("Enter a number:");
  scanf("%d",&var);
  switch (var)
  {
  case 1:
    printf("good");
    break;
  case 2:
    printf("better");
    break;
  case 3:
    printf("best");
    break;
  default:
    printf("invalid");
    break;
  }
}
 