//Write a program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.
// Asignment_22, Que_5
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i = 0, n = 0, sum = 0;

    printf("Enter n number: ");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));//in calloc by default values are zero

    if(ptr == NULL)//demanding a large size of memory, but it can't then it show memory alloation failed.
    {
        printf("Memory Allocation Failed \n");
        return 0;
    }

    printf("\nEnter %d values \n",n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
    }
    
    for ( i = 0; i < n; i++)
    {
        sum = sum + *(ptr+i);
    }
   printf("Sum is %d  \n",sum) ;

   free(ptr);

   return 0;
}