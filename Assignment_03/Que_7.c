/* Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/
// Asignment_3, Que_7
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a, b, c, d, D;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b ,&c);
    //D=discremete
    D=b*b-4*a*c;
    if(D>0)
    printf("real & distinct");
    else if(D<0)
    printf("imaginary");
    else
    printf("real & equal");
    return 0;
}