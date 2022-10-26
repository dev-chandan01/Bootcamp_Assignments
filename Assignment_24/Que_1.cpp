//Define a function to check whether a given number is a Prime number or not.
// Asignment_24, Que_1
// Topic~ Functions in C++
// Author~ Shree Chandan Samal
// Date~ 16/09/2022
#include<iostream>
using namespace std;
int check_prime(int);
int main()
{
  int num1;
  cout<<"Enter a number: ";
  cin>>num1;
  if(check_prime(num1) == 0)
  cout<<"Number is prime";
  else
  cout<<"Number is not prime";
  return 0;
}

int check_prime(int a)
{
  int i,flag = 0;
  for (i = 2; i <= a/2; i++)
  {
    if (a%i == 0)
       flag = 1;
  }
  return flag;
}