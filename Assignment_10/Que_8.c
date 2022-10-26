// Write a function to calculate the number of arrangements one can make from n items 
//and r selected at a time. (TSRS) [arrangements means permutation]
// Asignment_10, Que_8
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
int fact_num (int);
int perm_num (int , int );
int main()
{
int n1,r1,a;
printf("Enter the number: ");
scanf("%d%d",&n1,&r1);
a=perm_num(n1,r1);
printf("Permutation is: %d",a);
return 0;
}

int fact_num (int x)
{
    int f=1;
   for (int i = 1; (i <= x); i++)
    {
        f = f * i;
    }
    return f;
}

int perm_num (int n, int r)
{
    //n must greater than r
 int p = fact_num(n)/fact_num(r);
 return p;
}


