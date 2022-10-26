//Suppose we have a list of email addresses, check whether all email addresses have 
//‘@’ in it. Print the odd email out.
// Asignment_19, Que_4
// Topic~ Handling multiple String in C language
// Author~ Shree Chandan Samal
// Date~ 03/09/2022
#include <stdio.h>
#include<string.h>
int main()
{
    char a[4][30];
   
    int i,j;
    printf("Enter Email.id: ");
    for ( i = 0;i < 4; i ++)
    {
    gets(a[i]);
    }

  for (i = 0; i < 4; i++)
    {
            printf("valid email: ");
            if ((strchr(a[i],'@') != 0) && (strchr(a[i],'.') != 0))            
            {   
               printf("%s\n",a[i]);
               
            }
    }
 return 0;
}
