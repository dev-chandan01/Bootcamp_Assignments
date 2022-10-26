// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
// Asignment_19, Que_2
// Topic~ Handling multiple String in C language
// Author~ Shree Chandan Samal
// Date~ 02/09/2022

#include <stdio.h>
#include<string.h>
int main()
{
    char a[10][20],temp[20];
   
    int i,j;
    printf("Enter 10 cities name: ");
    for ( i = 0;i < 10; i ++)
    {
    gets(a[i]);
    }

  for (i = 0; i < 9; i++)
    {
        for (j = i+1; j<10; j++)
        { 
            
            if (strcmp(a[i],a[j]) > 0)            
            {   
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
 printf("Acending is(sort): ");
 for ( i = 0; i < 10; i++)
 {
   printf("%s\n",a[i]);
 }
 return 0;
}
