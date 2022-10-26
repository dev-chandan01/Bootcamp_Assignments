//Write a program in C to copy one string to another string.
// Asignment_17, Que_8
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 30/08/2022

#include<stdio.h>
#include<string.h>
int main()
{ 
    char str[]="kriteek1276@gmail.com";
    char str2[22];
    int i,j=0;
    for (i = 0; i<=strlen(str); i++)
    {
        str2[j]=str[i];
        j++;
    }
    printf("%s",str2);
}