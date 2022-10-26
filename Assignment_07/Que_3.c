// Write a program to check whether a given number is there in the Fibonacci series or not.
//  Asignment_7, Que_3
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int N, i, a = -1, b = 1, c;
    printf("Enter a number ");
    scanf("%d", &N);
    for (i = 1; 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (c == N)
        {
            printf("Number detect");
            break;
        }
        if (c > N)
        {
            printf("Number can't detect");
            break;
        }
    }
    // printf("%d ",c);
    return 0;
}