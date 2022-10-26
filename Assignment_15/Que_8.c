//Write a function in C to print all unique elements in an array.
// Asignment_15, Que_8
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 23/08/2022

// THIS IS A WRONG PROGRAMME

#include <Stdio.h>
void check_adjacent_duplicate (int []);
int main()
{
int arr[10];
check_adjacent_duplicate (arr);
}

void check_adjacent_duplicate (int a[])
{
int i,j,count=0,temp=0;
printf("Enter the numbers: ");
for ( i = 0; i < 10; i++)
{
    scanf("%d",&a[i]);
    
}
for ( j = 0; j < 9; j++)
{
  for ( i = j+1; i < 10; i++)
     {
        if(a[j]!=a[i])
        count++;
     }
        printf("%d",a[j]);
     
}
 
}