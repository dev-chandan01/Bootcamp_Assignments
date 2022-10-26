// Write a program to calculate the sum of two matrices each of order 3x3.
// Asignment_16, Que_1
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 24/08/2022

#include <Stdio.h>

int main()
{
 int a[3][3],b[3][3],c[3][3],i,j;

   
    printf("Enter 1st array(3*3): ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter 2nd array(3*3): ");
   for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    //adition
    printf("Sum of the two matrics are: \n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {   
            c[i][j]=a[i][j]+b[i][j];
            
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
 return 0;
}



