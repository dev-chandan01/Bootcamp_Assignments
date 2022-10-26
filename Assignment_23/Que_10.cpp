//Write a C++ program to add all the numbers of an array of size 10.
// Asignment_23, Que_10
// Topic~ Basic of c++
// Author~ Shree Chandan Samal
// Date~ 16/09/2022
#include<iostream>
using namespace std;
int main()
{ 
  int arr[10],sum=0,i;
  cout<<"Enter 10 numbers: ";
  for ( i = 0; i < 10; i++)
  cin>>arr[i];
  for (i = 0; i < 10; i++)
  sum=sum+arr[i];
  cout<<"Sum of 10 numbers is: "<<sum;
  return 0;
}