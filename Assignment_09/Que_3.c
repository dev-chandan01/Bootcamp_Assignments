// Write a program which takes the day number of a week
// and displays a unique greeting message for the day.

//  Asignment_9, Que_3
//  Topic~ Switch Case Problem
//  Author~ Shree Chandan Samal
//  Date~ 13/08/2022
#include <stdio.h>
int main()
{ 
    int x;
    printf("Enter the Day number: ");
    scanf("%d",&x);
  switch (x)
  {
  case 1:
    printf("\nToday is MONDAY,\n>Start your week with a good habit..\n");
    break;
  case 2:
    printf("\nToday is TUESDAY,\n>Nothing is impossible..\n");
    break;
  case 3:
    printf("\nToday is WEDNESDAY,\n>Work is GOD, Love your work..\n");
    break;
  case 4:
    printf("\nToday is THURSEDAY,\n>Plant a tree & Clean your Surrounding..\n");
    break;
  case 5:
    printf("\nToday is FRIDAY,\n>Give Respect, Take Respect..\n");
    break;
  case 6:
    printf("\nToday is SATARDAY,\n>Help Others\n");
    break;
  case 7:
    printf("\nToday is SUNDAY,\n>HURRAY...Holiday !!! Enjoy your day ,clean your clothes ..\n");
    break;
  default:
    printf("!!ARE YOU FOOL!!");
    break;
  }
}