//Write a program to demonstrate memory leak in C.
// Asignment_22, Que_7
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p = (int*)malloc(sizeof(int));
    p = NULL;

    return 0; 
}