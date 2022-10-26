// Write a program to reverse a string.
// Asignment_17, Que_6
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 29/08/2022

#include <stdio.h>
#include <string.h>
int main()
{ 
   char t,str[]="Encyclopidea" ;
   int i=0,j=strlen(str)-1;
   
   while (i<= j)
   {
    t=str[i];
    str[i]=str[j];
    str[j]=t;
    i++;
    j--;
   }
   printf(" %s",str);
   return 0;
   
}