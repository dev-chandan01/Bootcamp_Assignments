// Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
//  Asignment_2, Que_13
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a 3-digit number: ");
    scanf("%d", &x);
    //for right shift
    x=x%10*100+x/10;
    //for left shift(uncomment the below)
    //x=x%100*10+x/100;
    printf("%d",x);
    return 0;
}