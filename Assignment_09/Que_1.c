// Write a program which takes the month number as an 
//input and display number of days in that month.

//  Asignment_9, Que_1
//  Topic~ Switch Case Problem
//  Author~ Shree Chandan Samal
//  Date~ 13/08/2022
#include <stdio.h>
int main()
{   int month;
    printf("Enter the month number: ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("Month: JANUARY\nDays: 31");
        break;
    case 2:
        printf("Month: FEBRUARY\nDays: 28");
        break;
    case 3:
        printf("Month: MARCH\nDays: 31");
        break;
    case 4:
        printf("Month: APRIL\nDays: 30");
        break;
    case 5:
        printf("Month: MAY\nDays: 31");
        break;
    case 6:
        printf("Month: JUN\nDays: 30");
        break;
    case 7:
        printf("Month: JULY\nDays: 31");
        break;
    case 8:
        printf("Month: AUGUST\nDays: 31");
        break;
    case 9:
        printf("Month: SEPTEMBER\nDays: 30");
        break;
    case 10:
        printf("Month: OCTOBER\nDays: 31");
        break;
    case 11:
        printf("Month: NOVEMBER\nDays: 30");
        break;
    case 12:
        printf("Month: JANUARY\nDays: 31");
        break;
    default:
        printf("!! 404 Error !!");
        break;
    }
}