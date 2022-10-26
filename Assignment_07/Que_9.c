//Write a program to check whether a given number is an Armstrong number or not.
//  Asignment_7, Que_9
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int n, r, s=0, x ;
    printf("Enter a number: ");
    scanf("%d",&x);
        n=x;
        while (x != 0)
        {
            r = x % 10;
            s = s + r * r * r;
            x = x / 10;
        }
        if (s == n)
            printf("YES this is an Amstrong number\n");
        else
            printf("NO this is not an Amstrong number\n");
    
    return 0;
}