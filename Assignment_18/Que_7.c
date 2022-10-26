// Write a function to check whether a given string is palindrome or not.
// Asignment_18, Que_6
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 01/09/2022

#include<stdio.h>
#include<string.h>
int check_palindrome(char []);
int length_str(char []);
int main()
{
    char a[]="madam";
    if (check_palindrome(a) == 1)
    printf(">Palindrome");
    else
    printf(">Not a Palndrome");
    return 0;
}

int length_str(char str1[])
{
  int i;
  for(i=0;str1[i]!='\0';i++);
  return i-1;
}

int check_palindrome(char str[])
{
   
    int i=0,j=length_str(str);
    while (i<=j)
    {
       if(str[i]!=str[j])
       break;
       i++;j--;
    }
    if(i>j)
    return 1;
    else
    return 0;
    
}