//Write a program to convert a given string into uppercase.
// Asignment_17, Que_4
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 29/08/2022

#include <stdio.h>
int main()
{  
   char str[]="MySirG.com";
   int i;
   for ( i = 0; str[i]; i++)
   {
    if(str[i]>='a' && str[i]<='z')
    str[i] = str[i] - 32;
   }
   printf("%s",str);
   return 0;

}