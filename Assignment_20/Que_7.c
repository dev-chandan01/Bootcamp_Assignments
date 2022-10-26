//Write a program to count the number of vowels and consonants in a string using a pointer.
// Asignment_20, Que_7
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 11/09/2022
#include<stdio.h>
void check(char *);
int main()
{
    char str[30];
    printf("Enter a string");
    scanf("%s",&str);
    check(str);
}

void check(char *ptr)
{
   int i,vow=0,cons=0;
   for ( i = 0; ptr[i]!='\0'; i++)
   {
    if(ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i' || ptr[i]=='o' || ptr[i]=='u')
       vow++;
    else
       cons++;
   }
    printf("Total vowels: %d\n",vow);
    printf("Total consonants: %d",cons);
}