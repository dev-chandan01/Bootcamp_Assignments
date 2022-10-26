// Write a program in C to find the largest element using Dynamic Memory Allocation.
// Asignment_22, Que_6
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i = 0, n = 0, max = 0;

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
    
    max=ptr[0];
    for (i = 0; i < n ; i++)
    {
       if (max < ptr[i])
        {
          max=ptr[i];
        }
      }
   printf("Largest element is %d  \n",max) ;

   free(ptr);

   return 0;
}