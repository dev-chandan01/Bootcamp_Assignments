// WAP to calculate the length of String using printf function.
//   Asignment_1, Que_5
//   Author~ Shree Chandan Samal
//   Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int length;
    length= printf("mySirG.com");
    printf("Length of the string is: %d\n", length);
    return 0;
    //or
    /*char str[100];
    int length;
    printf("Enter a string to calculate it's length: ");
    gets(str);
    // formula for calculating the length of thr string
    length = strlen(str);
    printf("Length of the string: %d\n", length);
    return 0; */
}