// Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// Asignment_16, Que_9
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 25/08/2022

#include <Stdio.h>

int main()
{
 int arr[3][3],i,j,count=0;

   
    printf("Enter the array of (3*3): ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
 
 
   for ( i = 0; i < 3; i++)
   {
        for ( j = 0; j < 3; j++)
        {  
           if (arr[i][j]!=0)
            count++; 
        }
        
    }
    if (count<=(i*j)/2)
      printf("sparse");
    else
      printf("dense");
   return 0;
}