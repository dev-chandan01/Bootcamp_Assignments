// Write a program to print a string in reverse using a pointer
// Asignment_20, Que_10
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 11/09/2022
#include<stdio.h>
#include<string.h>
void rev_str(char *);
int main()
{
    char str[10];
    printf("Enter a string: ");
    scanf("%s",&str);
    rev_str(str);
}

void rev_str(char *ptr)
{ 
   char t;
   int i=0,j=strlen(ptr)-1;
   
   while (i<= j)
   {
    t=ptr[i];
    ptr[i]=ptr[j];
    ptr[j]=t;
    i++;
    j--;
   }
   printf("%s",ptr);
}