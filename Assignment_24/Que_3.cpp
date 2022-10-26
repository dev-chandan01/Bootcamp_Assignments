//Define a function to calculate x raised to the power y.
// Asignment_24, Que_3
// Topic~ Functions in C++
// Author~ Shree Chandan Samal
// Date~ 16/09/2022
#include<iostream>
int pow(int,int);
using namespace std;
int main()
{
  int a,b;
cout<<"Enter number and power";
cin>>a>>b;
cout<<"power of number is: "<<pow(a,b);
}

int pow(int x,int y)
{
  int a = 1;
  while (y--)
  {
    a = a*x;
  }
  return a;
}