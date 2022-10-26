// Write a function in C to read n number of values in an array and display it in reverse order.
//  Asignment_15, Que_6
//  Topic~ Array and function in C language
//  Author~ Shree Chandan Samal
//  Date~ 23/08/2022

#include <Stdio.h>
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