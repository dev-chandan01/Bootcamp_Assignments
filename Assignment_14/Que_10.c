// Write a program in C to copy the elements of one array into another array.
//Take array values from the user.
//  Asignment_14, Que_10
//  Topic~ Array in C language
//  Author~ Shree Chandan Samal
//  Date~ 22/08/2022

#include<stdio.h>
int main()
{
 int a[10],b[10],i;
 printf("Enter 10 numbers: ");
 for ( i = 0; i < 10; i++)
 {
   scanf("%d",&a[i]);
   b[i]=a[i];
 }
 for ( i = 0; i < 10; i++)
 {
    printf("%d ",b[i]);
 }
 return 0;
}

