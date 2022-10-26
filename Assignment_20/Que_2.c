//Write a function to swap strings of two char arrays of calling functions. (TSRN)
// Asignment_20, Que_2
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 10/09/2022

#include<stdio.h>
void swap_ch(char *p,char *q)
{
  char r;
 //printf("inside swap>>%c",*p);
  r=*p;
  *p=*q;
  *q=r;
  
  
}
int main()
{
    char str1[20],str2[20];
    printf("Enter Two strings");
    gets(str1);
    gets(str2);
    //char *str1="prateek",*str2="jain";
    swap_ch(&str1,&str2);
    printf("%s %s",str1,str2);
    return 0;
}


