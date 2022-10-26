//  Write a program to find next Prime number of a given number.
//  Asignment_7, Que_8
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int x, i, a, flag = 0;
    printf("Enter a number:" );
    scanf("%d",&a);
    ///////i put only 1 for infinity loop////////
    for (x = a+1; 1; x++)
    {   
        flag = 0;
        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            printf("%d ", x);
            break;
        }
    }
    return 0;
}