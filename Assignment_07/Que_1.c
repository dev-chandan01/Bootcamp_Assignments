//  Write a program to find the Nth term of the Fibonnaci series.
//  Asignment_7, Que_1
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int N, i, a = -1, b = 1, c;
    printf("Enter a number ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d ", c);
    return 0;
}