// Write a program in C to Find the Frequency of Characters.
// Asignment_17, Que_10
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 30/08/2022

#include<stdio.h>
int main()
{   //in this case we use frequency..
    char a[] = "hellohigoodmorning";
    int i=0,freq[150] = {0};
   while(a[i]!='\0')
    {
      freq[a[i++]]++;//Do you understand?? ref lec:/17th aug 57.00
    }
    for ( i = 0; i < 150; i++)
  
    {
       if(freq[i]!=0)
        printf("%c ==> %d\n",i,freq[i]);
    }

return 0;
}