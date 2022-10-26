//Write a C++ program to find the maximum of two numbers.
// Asignment_23, Que_9
// Topic~ Basic of c++
// Author~ Shree Chandan Samal
// Date~ 16/09/2022
#include<iostream>
using namespace std;
int main()
{ 
   int num1,num2;
   cout<<"Enter two numbers: ";
   cin>>num1>>num2;
   if(num1>num2)
   cout<<"Greater number is: "<<num1<<endl;
   else
   cout<<"Greater number is: "<<num2<<endl;
   return 0;
}