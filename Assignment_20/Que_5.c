//Write a program to find the maximum number between two numbers using a pointer
// Asignment_20, Que_5
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 11/09/2022
#include<stdio.h>
void sort(int *,int);
int main()
{
  int arr[10],i;
  sort(arr,10);// or sort(&arr[0],10);
  return 0;
}

void sort(int *ptr,int size)
{
   int i,j,max,num1,num2;
   //===================================================
   //(ptr+i) == &ptr[i] ,they are you can use any of them..
   //*(ptr+i) == ptr[i] ,they are you can use any of them..
   //===================================================

   printf("Enter %d numbers: ",size);
   for (int i = 0; i < size; i++)
   scanf("%d",&ptr[i]);
   printf("Enter 1st numbers: ");
   scanf("%d",&num1);
   printf("Enter 2st numbers: ");
   scanf("%d",&num2);
    max=ptr[num1];
    for (i = num1; i <= num2 ; i++)
    {
       if (max<ptr[i])
        {
          max=ptr[i];
        }
      }
//you can use it here
printf("maximum between two number is %d ",max);
  
}