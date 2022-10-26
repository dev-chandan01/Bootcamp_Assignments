//Find out the maximum and minimum from an array using dynamic memory allocation in C.
// Asignment_22, Que_2
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i = 0, size = 0, max = 0,min = 0;

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
    
    max=ptr[0];
    for (i = 0; i < size ; i++)
    {
       if (max < ptr[i])
        {
          max=ptr[i];
        }
      }
   printf("Largest element is %d  \n",max) ;
       min=ptr[0];
    for (i = 0; i < size ; i++)
    {
       if (min > ptr[i])
        {
          min=ptr[i];
        }
      }
   printf("Smallest element is %d  \n",min) ;

   free(ptr);

   return 0;
}