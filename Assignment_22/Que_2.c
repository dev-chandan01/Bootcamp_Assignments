//Write a program to ask the user to input a number of data values he would like to
//enter then create an array dynamically to accommodate the data values. Now take
//the input from the user and display the average of data values.
// Asignment_22, Que_2
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i = 0, size = 0, sum = 0;

    printf("Enter Size of array: ");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));//in calloc by default values are zero

    if(ptr == NULL)//demanding a large size of memory, but it can't then it show memory alloation failed.
    {
        printf("Memory Allocation Failed \n");
        return 0;
    }

    printf("\nEnter %d values \n",size);

    for ( i = 0; i < size; i++)
    {
        scanf("%d",ptr+i);
    }
    
    for ( i = 0; i < size; i++)
    {
        sum = sum + *(ptr+i);
    }
   printf("Average is %d  \n",sum/size) ;

   free(ptr);

   return 0;
}