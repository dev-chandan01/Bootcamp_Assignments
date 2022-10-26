// Write a program in C to print or display the upper triangular of a given matrix.
// Asignment_16, Que_8
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 25/08/2022

#include <Stdio.h>

int main()
{
 int arr[3][3],i,j;

   
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
           if (i>j)
            arr[i][j]=0;
            printf("%d",arr[i][j]);
           
        }
        printf("\n");
       
   }
   return 0;
}