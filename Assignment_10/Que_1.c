//Write a function to calculate the area of a circle. (TSRS)
// Asignment_10, Que_1
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
float area_Circle(float);
int main()
{
float s,r;
 printf("Enter the radius of circle: ");
 scanf("%f",&r);
 s=area_Circle(r);
 printf("Area of the circle: %f",s);
 return 0;
}

float area_Circle(float x)
{
  float A;
  A = 3.141*x*x;
  return A;
}