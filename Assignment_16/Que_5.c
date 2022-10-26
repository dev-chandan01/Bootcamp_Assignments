// Write a program in C to find the sum of left diagonals of a matrix.
// Asignment_16, Que_4
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 25/08/2022

#include <Stdio.h>

int main()
{
 int arr[3][3],sum_left_digonal,i,j;

   
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
           sum_left_digonal=arr[0][0]+arr[1][1]+arr[2][2];
        }
   }
   printf("sum of right diagonal is: %d ",sum_left_digonal);
   return 0;
}