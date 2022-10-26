//Write a program to input and print text using dynamic memory allocation.
// Asignment_22, Que_4
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str, c;
    int i=0, j=1;

    str =(char*)malloc(sizeof(char));

    printf("Enter String: ");

    while (c!='\n')
    {
        c = getc(stdin);//getc will input one character
        j++;
        str = (char*)realloc(str, j*sizeof(char));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    
    printf("\nThe entered sting is: %s",str);
    free(str);

    return 0;
}