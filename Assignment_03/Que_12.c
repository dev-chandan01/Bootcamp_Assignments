// Write a program to check whether a given alphabet is in uppercase or lowercase.
// Asignment_3, Que_12
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if ((a>=65)&&(a<=90))
    {
        printf("%c is a Uppercase letter",a);
    }
    else{
        if ((a>=97)&&(a<=122))
        {
            printf("%c is a Lowercase letter",a);
        }
        else{
            printf("%c is not an Alphabet",a);
        }
    }
    return 0;
}