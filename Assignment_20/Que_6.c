//Write a program to calculate the length of the string using a pointer
// Asignment_20, Que_6
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 11/09/2022
#include<stdio.h>
void length(char *);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    length(str);
    return 0;
}

void length(char *ptr)
{
    int count =0;
    for (int i = 0; ptr[i]!='\0' && ptr[i]!='\n'; i++)
    count++;
    printf("Length of the string is: %d",count);
}