// Program to check whether a year is a leap year or not. Using switch statement.

//   Asignment_9, Que_6
//   Topic~ Switch Case Problem
//   Author~ Shree Chandan Samal
//   Date~ 13/08/2022
#include <stdio.h>
int main()
{
  int year;
  printf("Enter the Year:");
  scanf("%d", &year);

  switch (year % 100 == 0)
  {
  case 1:
    switch (year % 400 == 0)
    {
    case 1:
      printf("Leap Year");
      break;
    case 0:
      printf("Non-Leap Year");
      break;
    }
    break;

  case 0:
    switch (year % 4 == 0)
    {
    case 1:
      printf("Leap Year");
      break;
    case 0:
      printf("Non-Leap Year");
      break;
    }
    break;
  }
  return 0;
}
