//C program to find all roots of a quadratic equation using switch case.

//   Asignment_9, Que_10
//   Topic~ Switch Case Problem
//   Author~ Shree Chandan Samal
//   Date~ 13/08/2022
#include <stdio.h>
int main()
{
 int a, b, c, d, D, Disc;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b ,&c);
    //D=discremete
    D=b*b-4*a*c;
    Disc=D>0;
    switch (Disc)
    {
    case 1:
        printf("real & distinct");
        break;
    case 0:
        printf("imaginary");
        break;
    default:
        printf("real & equal");
        break;
    }
    return 0;
}