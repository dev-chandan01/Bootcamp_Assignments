// Write a program in C to find the row with maximum number of 1s.
// Asignment_16, Que_10
// Topic~ Multidimensional Array in C language
// Author~ Shree Chandan Samal
// Date~ 25/08/2022

#include<stdio.h>

int main()
{
 int arr[3][3],i,j,max=0,sum=0,index=0;

   
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
           if (arr[i][j]==1)
            sum=sum+arr[i][j];
        }
        if(sum>max)
        max=sum;
        index=i;
        sum=0;
        
    }
   printf("%d",max); 
   printf("%d",index);
   return 0;
}