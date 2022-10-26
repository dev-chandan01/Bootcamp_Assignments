//Write a program to print the elements of an array in reverse order.
// Asignment_20, Que_9
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 11/09/2022
#include<stdio.h>
void rev(int *);
int main()
{
    int arr[10],i;
    printf("Enter 10 numbers");
    for ( i = 0; i < 10; i++)
    {
       scanf("%d",&arr[i]);
    }
    rev(arr);
}

void rev(int *ptr)
{ 
    int i;
    for (i = 9;i >= 0; i--)
    printf("%d ",ptr[i]);
}