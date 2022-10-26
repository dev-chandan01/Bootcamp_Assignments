//Write a program to check whether the given number is even or odd using a bitwise operator.
//  Asignment_2, Que_8
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int x,result;
    printf("Enter the number: ");
    scanf("%d",&x);
    //(number)operator(mask)=result >>> here x=number, &=operator, 1=mask, result= answer
    result=x&1;
    if (result==1)
    {
        printf("odd");
    }
    else{
        printf("even");
    }
    
    return 0;
}