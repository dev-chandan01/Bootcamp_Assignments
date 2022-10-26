//Write a recursive function to calculate HCF of two numbers
// Asignment_13, Que_7
// Topic~ More on Recursion in C language
// Author~ Shree Chandan Samal
// Date~ 15/08/2022

#include <stdio.h>
int hcf_N(int,int);
int main()
{
int s,p,t;
printf("Enter the number: ");
scanf("%d%d",&s,&p);
t=hcf_N(s,p);
printf("%d",t);
return 0;
}

int hcf_N(int a,int b)
{
   if (b==0)
   {
   return(a);
   return hcf_N(b,a%b);
   }
   
}
