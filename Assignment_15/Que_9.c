// Write a function in C to merge two arrays of the same size sorted in descending order.
// Asignment_15, Que_9
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 23/08/2022

#include<stdio.h>
//not working properly..
void sum_arr(int [], int []);
int main()
{
int num1[10],num2[10];
sum_arr(num1,num2);
return 0;
}

void sum_arr(int a[], int b[])
{
 int i=0,j=0,k=0,c[20];
 printf("\n>Enter 10 numbers of array A: ");
 for (int i = 0; i < 10; i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n>Enter 10 numbers of array B: ");
 for (int j = 0; j < 10; j++)
 {
  scanf("%d",&b[j]);
 }
 for ( k = 0; k < 20; k++)
 { 
  if (i>=10)
 {
  while (k<20)
  {
    c[k]=b[j];
    j++;
    k++;
    if(k == 20)
    break;
  }
  
 }

  if (j>=10)
 {
  while (k<20)
  {
    c[k]=a[i];
    i++;
    k++;
    if(k == 20)
    break;
  }
  
 }
 
  else if (a[i] < b[j])
   {
    c[k] = a[i];
    i++;
   }
   else{
    c[k] = b[j];
    j++;
   }
   
 }
 for ( k = 0; k < 20; k++)
  printf("%d ",c[k]);
 
}