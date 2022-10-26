//Write a function to swap values of two in variables of calling function. (TSRN)
// Asignment_20, Que_1
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 10/09/2022
#include<stdio.h>
void swap (int *,int*);
int main()
{
  int x,y;
  printf("Enter two numbers:");
  scanf("%d%d",&x,&y);
  swap(&x,&y);
  printf("%d %d",x,y);
  return 0;
}

void swap (int *a,int *b)
{
   int t;
   t=*a;
   *a=*b;
   *b=t;
}