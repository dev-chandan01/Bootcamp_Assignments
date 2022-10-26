// Write a function to reverse a string.
// Asignment_18, Que_2
// Topic~ String and functions in C language
// Author~ Shree Chandan Samal
// Date~ 31/08/2022

#include <stdio.h>
#include <string.h>
void reverse_string(char[]);

int main(){
char s[20];
reverse_string(s);
return 0;
}
void reverse_string(char str[])
{ 
   printf("Enter a string(max<20)");
   fgets(str,20,stdin);
   char t;
   int i=0,j=strlen(str)-1;
   
   while (i<= j)
   {
    t=str[i];
    str[i]=str[j];
    str[j]=t;
    i++;
    j--;
   }
   
  printf("%s",str);
   
}