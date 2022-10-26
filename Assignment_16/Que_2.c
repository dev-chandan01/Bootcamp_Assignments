// Write a program to calculate the product of two matrices each of order 3x3.
// Asignment_16, Que_2
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 24/08/2022

#include <Stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum;
    printf("Enter the 1st array of (3*3): ");
    //User input for 1st array
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("Enter the 2nd array of (3*3): ");
    //User input for 2nd array
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }
    //Product of two array
    for ( i = 0; i < 3; i++)
      
      for ( j = 0; j < 3; j++)
        {
          sum=0;
          for ( k = 0; k < 3; k++)
          sum=sum+A[i][k]*B[k][j];
          C[i][j]=sum;
          
        }
    //Printing the product of array..
    for ( i = 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
        printf("%d ",C[i][j]);
      }
        printf("\n");
    }
    return 0;
}