// Write a program to print all Armstrong numbers under 1000.
//  Asignment_7, Que_10
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int n, r, s, x;
    for (n = 1; n <= 1000; n++)
    {
        s = 0;
        x = n;
        while (x != 0)
        {
            r = x % 10;
            s = s + r * r * r;
            x = x / 10;
        }
        if (s == n)
            printf("%d\n", n);
    }
    return 0;
}