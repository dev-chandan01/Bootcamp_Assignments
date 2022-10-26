// Write a program to find the smallest number stored in an array of size 10.
// Take array values from the user.
// Asignment_14, Que_5
// Topic~ Array in C language
// Author~ Shree Chandan Samal
// Date~ 17/08/2022

#include <stdio.h>
int min_arr(int []);
int main()
{
int a[10]; 
printf("Smallest number is: %d",min_arr(a));
return 0;
}

int min_arr(int b[])
{
 int min;
 printf("Enter 10 numbers: ");
 for (int i = 0; i < 10; i++)
 {
    scanf("%d",&b[i]);
    min=b[0];
    for (int i = 0; i < 10; i++)
    {
    if(min>b[i])
    min=b[i];
    }
 }
 return min;
}