// Write a program to print the strings which are palindrome in the list of strings.
// Asignment_19, Que_6
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 01/09/2022

#include<stdio.h>
#include<string.h>
//int check_palindrome(char [][]);
//int length_str(char [][]);
int main()
{
    char str[4][20];
    //if (check_palindrome(a) == 1)
    //printf(">Palindrome");
    //else
    //printf(">Not a Palndrome");
    //return 0;
//}



//int check_palindrome(char str[][])
//{
    //j=length_str(str)
    int i=0,j=4;
    printf("Enter 4 string for checking palindrome\n");
    for ( i; i < 4; i++)
    {   
        printf("String %d: ",i+1);
        gets(str[i]);
    }
    
    while (i<=j)
    {
       if(str[i]!=str[j])
       break;
       i++;j--;
    }
    if(i>j)
    printf(">Palindrome");
  
    
}
//int length_str(char str1[][])
//{
//  int i;
//  for(i=0;str1[i][20]!='\0';i++);
//  return i-1;
//}