// write a program to print a table of N.
//  Asignment_5, Que_10
//  Topic~ More on Iterative Control Statements
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    printf("Which table do you want?: ");
    scanf("%d", &j);
    for (i = 1; (i <= 10); i++)
    {
        printf("%d*%d=%d\n", j, i, j * i);
    }
    return 0;
}