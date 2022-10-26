//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD
//  Asignment_2, Que_12
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    float inr;
    printf("INR: ");
    scanf("%f", &inr);
    inr/=82.17;
    printf("USD: %f",inr );
    return 0;
}