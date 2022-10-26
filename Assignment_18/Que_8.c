// Write a function to count words in a given string.
// Asignment_18, Que_8
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 01/09/2022

#include<stdio.h>
int count_word (char []);
int main()
{
   char s[]="shree chandan samal";
   printf("There are %d words.",count_word(s));
   return 0;
}

int count_word (char str[])
{
   int i,flag=1;
   for ( i = 0; str[i]!=0; i++)
   {
    if (str[i]==' ' && str[i+1]!=' ')
    flag++;
   }
   return flag;
}