// Write a program to sort elements of an array of size 10. Take array values from the user.
// Asignment_14, Que_6
// Topic~ Array in C language
// Author~ Shree Chandan Samal
// Date~ 17/08/2022

#include <stdio.h>
void sum_arr(int []);
int main()
{
int a[10]; 
sum_arr(a);
return 0;
}

void sum_arr(int b[])
{
 int temp,i,j;
 printf("Enter 10 numbers: ");
 for (int i = 0; i < 10; i++)
 {
  scanf("%d",&b[i]);
 }
 //Brut force sorting...
 for (int i = 0; i < 9; i++)
 {
    for (int j = i+1; j < 10; j++)
    { 
        //for Accending b[i]>b[j] ,for Decending b[i]<b[j] 
        if (b[i]>b[j])
        {
          temp=b[i];
          b[i]=b[j];
          b[j]=temp;
        }
    }
}
 printf("Acending is(sort): ");
 for ( i = 0; i < 10; i++)
 {
   printf("%d ",b[i]);
 }
 
}