// Write a program to search a string in the list of strings.
// Asignment_19, Que_4
// Topic~ Handling multiple String in C language
// Author~ Shree Chandan Samal
// Date~ 03/09/2022
#include <stdio.h>
#include<string.h>
int main()
{
    char a[4][20];
   
    int i,j;
    printf("Enter 4 cities name: ");
    for ( i = 0;i < 4; i ++)
    {
    gets(a[i]);
    }

  for (i = 0; i < 4; i++)
    {
        
            if (strcmp(a[i],"cuttack") == 0)            
            {   
               printf("String found");
               break;
            }
           else{
              printf("string not found");
              break;
           }
           
    }
 return 0;
}
