// Write a program to reverse a given number.
//  Asignment_6, Que_10
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i,j=0,r;
    printf("Enter a numbers(for reverse): ");
    scanf("%d", &i);
    while (i!=0)
    {
        r=i%10;
        j=j*10+r;//we can also remove this value,but for
                 //further use of that variable we use that variable.
        i=i/10;
        
    }
    printf("Reverse is: %d", j);
    return 0;

}