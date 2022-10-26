// Write a function in C to merge two arrays of the same size sorted in descending order.
// Asignment_15, Que_9
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 23/08/2022
#include<stdio.h>
int main()
{   //in this case we use frequency..
    int a[] = {2,4,7,3,3,23,24,5,3,5},freq[100] = {0},i;
    for ( i = 0; i < 10; i++)
    {
      freq[a[i]]++;
    }
    for ( i = 0; i < 100; i++)
    {
        if(freq[i]!=0)
        printf("%d ==> %d\n",i,freq[i]);
    }
    
return 0;
}