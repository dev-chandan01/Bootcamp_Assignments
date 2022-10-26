//Define a function to print Pascal Triangle up to N lines.
// Asignment_24, Que_4
// Topic~ Functions in C++
// Author~ Shree Chandan Samal
// Date~ 16/09/2022
#include<iostream>
int fact_num (int);
int comb_num (int , int );
void pascal_fun (int );
using namespace std;
int main()
{ 
  int num;
  cout<<"Enter a number: ";
  cin>>num;
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
        cout<<comb_num(k,l);
      }
      cout<<"\n";
   }
   
}