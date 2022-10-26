//  Write a program to count digits in a given number.
//  Asignment_6, Que_7
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i, count= 0;
    printf("Enter a numbers(for count the digits): ");
    scanf("%d", &i);
    while (i!=0)
    {
        i=i/10;
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}