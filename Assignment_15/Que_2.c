// Write a function to find the smallest number from the given array of any size. (TSRS)
// Asignment_15, Que_2
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 22/08/2022
#include<stdio.h>
int min_arr(int []);
int main()
{
int a[10]; 
printf("Greatest number is: %d",min_arr(a));
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