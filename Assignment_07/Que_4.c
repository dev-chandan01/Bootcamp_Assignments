// Write a program to calculate HCF of two numbers.
//  Asignment_7, Que_4
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
    printf("HCF is %d", hcf);
    //if you want lcm from hcf then, uncomment the below lines..
    //lcm=(a*b)/hcf;
    //printf("HCM is %d", lcm);
    //below condition is for checking co-prime or not(uncomment it for use)...
    //if(hcf == 1)
    //printf("\nThe numbers are co-prime number.");
    return 0;
}