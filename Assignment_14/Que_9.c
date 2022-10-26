// Write a program in C to read n number of values in an array and display it in reverse order.
//Take array values from the user.
//  Asignment_14, Que_9
//  Topic~ Array in C language
//  Author~ Shree Chandan Samal
//  Date~ 22/08/2022

#include <stdio.h>
void reverse_array(int []);
int main()
{   
int a[10];
reverse_array(a);
}

void reverse_array(int num[])
{
int i;
printf("Enter 10 numbers :");
for ( i = 0; i < 10; i++)
{
    scanf("%d",&num[i]);
}
for ( i = 10 - 1; i >=0; i--)
{
   printf("%d ",num[i]) ;
}

}