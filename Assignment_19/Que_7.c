//From the list of IP addresses, check whether all ip addresses are valid.
// Asignment_19, Que_7
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 05/09/2022

#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]= "23.134.254.27.36";
    int flag=0;
    char *a=strtok(ip,".");//strok means string token,Dont't use single quote here use> "." < sing quote means character,
                           //Double quote means string,we have to input string not character.
    while (a != NULL)
    {
        int x = atoi(a);//atoi means ascii to integer.
        if((x >= 0) && (x <= 255) && (flag>=4))
        break;
        printf("%d ",x);
        flag++;
        a=strtok(NULL,".");
    }
   return 0; 
}