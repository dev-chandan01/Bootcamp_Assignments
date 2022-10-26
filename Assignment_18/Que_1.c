// Write a function to calculate length of the string.
// Asignment_18, Que_1
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 31/08/2022

#include<stdio.h>
int length_str(char str[]);
int main()
{
 
 char s[20];
 printf("%d",length_str(s));
 return 0;
}

int length_str(char str[])
{
  int i;
  printf("Enter the string (max<20)");
  fgets(str,20,stdin);
  for(i=0;str[i]!='\0';i++);
  return i;
}