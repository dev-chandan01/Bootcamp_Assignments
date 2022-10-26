// Write a function to find the greatest number from the given array of any size. (TSRS)
// Asignment_15, Que_1
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 22/08/2022
#include<stdio.h>
int max_arr(int []);
int main()
{
int a[10]; 
printf("Greatest number is: %d",max_arr(a));
return 0;
}

int max_arr(int b[])
{
 int max;
 printf("Enter 10 numbers: ");
 for (int i = 0; i < 10; i++)
 {
    scanf("%d",&b[i]);
    max=b[0];  
    for (int i = 0; i < 10; i++)
    {
    if(max<b[i])
    max=b[i];
   }
 }
return max;
}