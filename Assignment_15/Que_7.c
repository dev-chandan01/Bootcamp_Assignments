//Write a function in C to count a total number of duplicate elements in an array.
// Asignment_15, Que_7
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 23/08/2022

#include <Stdio.h>
int check_adjacent_duplicate (int []);
int main()
{
int arr[10];
printf("Total Numbers of Duplicate elements in the array is: %d",check_adjacent_duplicate (arr));
}

int check_adjacent_duplicate (int a[])
{
int i,j,count=0;
printf("Enter the numbers: ");
for ( i = 0; i < 10; i++)
{
    scanf("%d",&a[i]);
    
}
for ( j = 0; j < 9; j++)
{
  for ( i = j+1; i < 10; i++)
     {
        if(a[j]==a[i])
         count++;
     }
}
 return count;
}