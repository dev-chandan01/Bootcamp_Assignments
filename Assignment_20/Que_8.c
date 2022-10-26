//Write a program to compute the sum of all elements in an array using pointers.
// Asignment_20, Que_8
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 11/09/2022
#include<stdio.h>
void sum_arr(int *);
int main()
{
    int arr[10],i;
    printf("Enter 10 numbers");
    for ( i = 0; i < 10; i++)
    {
       scanf("%d",&arr[i]);
    }
    sum_arr(arr);
}

void sum_arr(int *ptr)
{ 
    int i,sum=0;
    for (i = 0;i<10; i++)
    sum= sum+ptr[i];
    printf("%d",sum);
}