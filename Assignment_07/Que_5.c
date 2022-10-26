//  Write a program to check whether two given numbers are co-prime
// numbers or not.
//  Asignment_7, Que_5
//  Topic~ Iterative Control Statements (Part - 2)
//  Author~ Shree Chandan Samal
//  Date~ 10/08/2022
#include <stdio.h>
int main()
{
    int a, b, i, hcf ,lcm;
    printf("Enter a number ");
    scanf("%d%d", &a, &b);

    int min = a < b ? a : b;

    for (i = 1; i <= min; i++)
    {
        if ((a % i == 0) && (b % i == 0))
            hcf = i;
    }
    if(hcf == 1)
    printf("The numbers are co-prime number.");
    else
    printf("The numbers are not co-prime number.");
    return 0;
}