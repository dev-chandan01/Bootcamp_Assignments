// Write a function to calculate HCF of two numbers. (TSRS)
// Asignment_11, Que_2
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
int hcf_fun (int,int);
int main()
{
    int x,y,s;
    printf("Enter two numbers for HCF: ");
    scanf("%d%d",&x,&y);
    s=hcf_fun (x,y);
    printf("HCF is %d",s);
    return 0;
}

int hcf_fun (int a,int b)
{ 
  int hcf;
  int min = a < b ? a : b;

    for (int i = 1; i <= min; i++)
    {
        if ((a % i == 0) && (b % i == 0))
            hcf = i;
        
    }
    return hcf;
}