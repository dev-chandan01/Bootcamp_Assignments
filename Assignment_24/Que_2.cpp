//Define a function to find the highest value digit in a given number.
// Asignment_24, Que_2
// Topic~ Functions in C++
// Author~ Shree Chandan Samal
// Date~ 16/09/2022
#include<iostream>
using namespace std;
int max_digit(int);
int main()
{
int num;
cout<<"Enter a number:";
cin>>num;
cout<<"Highest digit is: "<<max_digit(num);
return 0;
}

int max_digit(int a)
{
  int max=-1;
  //while (a)
  //{
  //  b = a%10;
  //  a = a/10;
  //  if (max<=b)
  //  max=b;
  //}
  while (a)
  {
    if(max < a%10)
       max = a%10;
    a = a/10;
  }
 return max;
}