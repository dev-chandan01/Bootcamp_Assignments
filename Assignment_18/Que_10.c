// Write a function to find the repeated character in a given string.
// Asignment_18, Que_10
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 01/09/2022

#include<stdio.h>
void rep_char (char []);
int main()
{   //in this case we use frequency..
    char a[] = "hellohigoodmorning";
    rep_char (a);
    return 0;
}
void rep_char (char str[])
{
    int i=0,freq[150] = {0};
   while(str[i]!='\0')
    {
      freq[str[i++]]++;//Do you understand?? ref lec:/17th aug 57.00
    }
    printf("Repeated charecters are:");
    for ( i = 0; i < 150; i++)
  
    {  
      
       if(freq[i]!=0 && freq[i]!=1)
        printf(" %c ",i);
    }
}