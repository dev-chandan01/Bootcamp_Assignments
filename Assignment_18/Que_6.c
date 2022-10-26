// Write a function to check whether a given string is an alphanumeric string or not. 
//(Alphanumeric string must contain at least one alphabet and one digit)
// Asignment_18, Que_6
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 01/09/2022

#include<stdio.h>

int length_str(char str1[]);
void alpnum_str (char str[]);
int main()
{
char s[]="WoodBoy";
alpnum_str (s);
return 0;
}


int length_str(char str1[])
{
  int i;
  for(i=0;str1[i]!='\0';i++);
  return i;
}


void alpnum_str (char str[])
{
  int i,flag=0,slag=0;
  for (i = 0; str[i]!=0; i++)
  {
    if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    flag++;
    if(str[i]>='0' && str[i]<='9')
    slag++;
  }
  if (flag==length_str(str))
    printf("Not an alphanumeric");
  if(slag!=0)
    printf("Alphanumeric");
}