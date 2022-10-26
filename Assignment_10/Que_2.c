// Write a function to calculate simple interest. (TSRS)
// Asignment_10, Que_2
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
float Simple_intrest(float ,float ,float );
int main()
{
 float p,r,t,s;
 printf("Enter principle amount,intrest rate and time respectively: ");
 scanf("%f%f%f",&p,&r,&t);
 s= Simple_intrest(p,r,t);
 printf("Simple Intrest is: %f",s);
 return 0;
}

float Simple_intrest(float x,float y,float z)
{
    float si;
    si=(x*y*z)/100;
    return si;
}