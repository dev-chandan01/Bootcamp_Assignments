// Write a function to transform string into lowercase.
// Asignment_18, Que_5
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 01/09/2022

#include <stdio.h>
void str_up(char []);
int main()
{  
   char s[]="MySirG.com";
   str_up(s);
   return 0;
}
 void str_up(char str[]){
   int i;
   for ( i = 0; str[i]; i++)
   {
    if(str[i]>='A' && str[i]<='Z')
    str[i] = str[i] + 32;
   }
   printf("%s",str);
}