// Write a function to print first N natural numbers (TSRN)
// Asignment_10, Que_4
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
void nat_num(int x);
int main()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a); 
  nat_num(a);
  return 0; 
}

void nat_num (int x)
{
   for (int i = 1; i <= x; i++)
   {
    printf("%d\n",i);
   }
}