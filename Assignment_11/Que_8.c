//Write a function to print PASCAL Triangle. (TSRN)
// Asignment_11, Que_8
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
int fact_num (int);
int comb_num (int , int );
void pascal_fun (int );
int main()
{ 
    int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  pascal_fun (num);
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

int comb_num (int n, int r)
{
    //n must greater than r
 int c= fact_num(n)/(fact_num(r)*fact_num(n-r));
 return c;
}

void pascal_fun (int z)
{
   int k,l;
   for ( k = 0; k <= z; k++)
   {
      for ( l = 0; l <= k; l++)
      {
        //i=n,j=r
        printf("%d", comb_num(k,l));
      }
      printf("\n");
   }
   
}