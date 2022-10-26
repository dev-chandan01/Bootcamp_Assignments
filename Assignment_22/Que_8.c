//Write a program to demonstrate dangling pointers in C.
// Asignment_22, Que_8
// Topic~ DMA in C language
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("Before free %d\n",*p);
    free(p);//free to the loation which point by p
    printf("After Free %d",*p);
    return 0;

}