// Write a program in C to find the sum of rows and columns of a Matrix.
// Asignment_16, Que_6
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 25/08/2022

#include <Stdio.h>

int main()
{
 int arr[3][3],sum=0,i,j;

   
    printf("Enter the array of (3*3): ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("sum of rows:");
   for ( i = 0; i < 3; i++)
   {
        for ( j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
   }
   printf("\nsum of column:");
   for ( i = 0; i < 3; i++)
   {
        for ( j = 0; j < 3; j++)
        {
            sum=sum+arr[j][i];
        }
        printf("%d ",sum);
        sum=0;
   }
   return 0;
}