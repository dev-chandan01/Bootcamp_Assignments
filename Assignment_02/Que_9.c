//  Write a program to print size of an int, a float, a char and a double type variable.
//  Asignment_2, Que_9
//  Topic~ Operators In C Language
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int a, check1, check2, check3, check4;
    char b;
    float c;
    double d;

    check1 = sizeof(a);
    check2 = sizeof(b);
    check3 = sizeof(c);
    check4 = sizeof(d);
    printf("size is: %d\n", check1);
    printf("size is: %d\n", check2);
    printf("size is: %d\n", check3);
    printf("size is: %d\n", check4);
    return 0;
}