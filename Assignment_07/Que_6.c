//  Write a program to print all Prime numbers under 100
//  Asignment_7, Que_6
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int x, i, flag = 0;
    for (x = 1; x <= 100; x++)
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