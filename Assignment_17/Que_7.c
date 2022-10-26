// Write a program in C to count the total number of alphabets, digits and special characters in a string.
// Asignment_17, Que_7
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 30/08/2022

#include <stdio.h>
int main()
{ 
    char str[]="kritik1256@gmail.com";
    int i,alp=0,dig=0,spe=0;

    for ( i = 0; str[i]; i++)
   {
    if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
       alp++;
    else if(str[i]>='0' && str[i]<='9')
       dig++;
    else
       spe++;
   }
   printf("Total alphabet:- %d\nTotal digits:- %d\nTotal special:- %d",alp,dig,spe);
   return 0;
}