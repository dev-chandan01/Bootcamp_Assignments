//Write a C++ program to swap values of two int variables without using third variable
// Asignment_23, Que_8
// Topic~ Basic of c++
// Author~ Shree Chandan Samal
// Date~ 15/09/2022
#include<iostream>
using namespace std;
int main()
{ 
    float num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<num1<<"\t"<<num2<<endl;
    return 0;
}