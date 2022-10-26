// Write a program to count vowels in a given string.
// Asignment_17, Que_3
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 29/08/2022

#include <stdio.h>
int main()
{
    char letter[50] ="aeiou";
   
    int i,count=0;
    //while(letter[i]!='\0'){
    //i++;
    //if(letter[i] == 'a'||letter[i] == 'e'||letter[i] == 'i'||letter[i] == 'o'||letter[i] == 'u')
    //count++;
    for ( i = 0;letter[i]; i++)
    {
        if(letter[i] == 'a'||letter[i] == 'e'||letter[i] == 'i'||letter[i] == 'o'||letter[i] == 'u')
        count++;
    }
    
    printf("%d",count);
    
    return 0;
}
  