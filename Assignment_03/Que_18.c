/*Write a program which takes the month number as an input and display number of 
days in that month*/
// Asignment_3, Que_18
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int month;
    printf("Enter the number as the n>>[1 for jan like this all..]: ");
    scanf("%d", &month);
    if (month==1)
      printf("Month-january,Days-31");
    else if (month==2)
      printf("Month-febuary,Days-28");
    else if (month==3)
      printf("Month-march,Days-31");
    else if (month==4)
      printf("Month-april,Days-30");
    else if (month==5)
      printf("Month-may,Days-31");
    else if (month==6)
      printf("Month-jun,Days-30");
    else if (month==7)
      printf("Month-july,Days-31");
    else if (month==8)
      printf("Month-august,Days-31");
    else if (month==9)
      printf("Month-september,Days-30");
    else if (month==10)
      printf("Month-october,Days-31");
    else if (month==11)
      printf("Month-november,Days-30");
    else if (month==12)
      printf("Month-december,Days-31");
    return 0;
}