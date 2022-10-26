/* Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
// Asignment_3, Que_16
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if ((a >= 65) && (a <= 90))
        printf("%c is a Uppercase letter", a);
    else
    {
        if ((a >= 97) && (a <= 122))
            printf("%c is a Lowercase letter", a);
        else
        {
            if ((a >= 48) && (a <= 57))
                printf("%c is a digit", a);
            else
                printf("%c is a Special character", a);
        }
    }
    return 0;
}