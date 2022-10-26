//Write a function to sort an array of any size. (TSRN)
// Asignment_15, Que_3
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 22/08/2022

//NOTE-THIS IS A WRONG PROGRAM...


#include <Stdio.h>
void sort_arr(int [],int);
int main()
{
int a[99999],size; 
sort_arr(a,size);
return 0;
}

void sort_arr(int b[],int size)
{
 int temp,i,j;
 printf("Enter the Size of the array:");
 scanf("%d",&size);
 printf("Enter %d numbers: ",size);
 for (int i = 0; i < size; i++)
 {
  scanf("%d",&b[i]);
 }
 //Brut force sorting...
 for (int i = 0; i < size-1; i++)
 {
    for (int j = i+1; j < size; j++)
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
 for ( i = 0; i < size; i++)
 {
   printf("%d ",b[i]);
 }
 
 
}