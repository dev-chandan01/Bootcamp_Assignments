//Write a program to count the occurrence of a given character in a given string.
// Asignment_17, Que_2
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 29/08/2022

#include <stdio.h>
int main()
{
    char str[30]="MySirGismybestteacher";
    char check = 'e';
    int i=0,count=0;
    while(str[i]!='\0'){
    i++;
    if(str[i] == check)
    count++;
    }
    printf("%d",count);
    
    return 0;
}
