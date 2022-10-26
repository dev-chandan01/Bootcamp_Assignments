//  Write a program to print all Prime numbers between two given numbers.
//  Asignment_7, Que_7
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int x, i, a, b, flag = 0;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    for (x = a; x <= b; x++)
    {
        flag = 0;
        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                flag = 1;
        }
        if (flag == 0)
            printf("%d ", x);
    }
    return 0;
}