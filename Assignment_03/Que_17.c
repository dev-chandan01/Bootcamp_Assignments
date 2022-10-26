/* Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not.*/
// Asignment_3, Que_17
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three side of the tringle as (a:b:c): ");
    scanf("%d:%d:%d", &a,&b,&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
        printf("valid triangle");
    else
       printf("Invalid traingle");
    return 0;
}