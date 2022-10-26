// Write a program to check whether a given year is a leap year or not.
//  Asignment_3, Que_8
//  Topic~ Decision Control Statements
//  Author~ Shree Chandan Samal
//  Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    year%400==0?printf("%d is a leap year",year):(year % 100 == 0)?
    printf("%d is not a leap year",year):(year % 4 == 0)?
    printf("%d is a leap year",year):printf("%d is not a leap year",year);
  //if (year % 400 == 0) 
  //  printf("%d is a leap year",year);
  //else if (year % 100 == 0) 
  //  printf("%d is not a leap year",year);
  //else if (year % 4 == 0) 
  //  printf("%d is a leap year",year);
  //else 
  //  printf("%d is not a leap year",year);

    return 0;
}