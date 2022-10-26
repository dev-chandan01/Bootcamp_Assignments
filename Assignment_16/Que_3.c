// Write a program in C to find the transpose of a given matrix.
// Asignment_16, Que_3
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 25/08/2022

#include <Stdio.h>

int main()
{
 int arr[3][3],trans[3][3],i,j;

   
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
            trans[i][j]=arr[j][i];
        }
   }
   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 3; j++)
        {
           printf("%d ",trans[i][j]);
        }
        printf("\n");
   }
}