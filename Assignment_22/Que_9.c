//Write a program to allocate memory dynamically of the size in bytes entered by the
//user. Also handle the case when memory allocation is failed.
// Asignment_22, Que_9
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i = 0, size = 0;

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
    free(ptr);

   return 0;
}