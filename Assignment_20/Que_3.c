//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
// Asignment_20, Que_3
// Topic~ Pointers in C language
// Author~ Shree Chandan Samal
// Date~ 11/09/2022
#include<stdio.h>
void sort(int *,int);
int main()
{
  int arr[10],i;
  sort(arr,10);// or sort(&arr[0],10);

 //you can use here or in short function
 // printf("Acending is(sort): ");
 //for ( i = 0; i < 10; i++)
 //{
 //  printf("%d ",*(arr+i));
 //}
  return 0;
}

void sort(int *ptr,int size)
{
   int i,j,temp;
   //===================================================
   //(ptr+i) == &ptr[i] ,they are you can use any of them..
   //*(ptr+i) == ptr[i] ,they are you can use any of them..
   //===================================================

   printf("Enter 10 numbers: ");
   for (int i = 0; i < size; i++)
   scanf("%d",ptr+i);

    for (int i = 0; i < size-1; i++)
    {
      for (int j = i+1; j < size; j++)
      { 
        //for Accending *(ptr+i)>*(ptr+j) ,for Decending *(ptr+i)<*(ptr+j)] 
        if (*(ptr+i)>*(ptr+j))
        {
          temp=*(ptr+i);
          *(ptr+i)=*(ptr+j);
          *(ptr+j)=temp;
        }
      }
} 
//you can use it here or in main function  
 printf("Acending is(sort): ");
 for ( i = 0; i < size; i++)
 {
   printf("%d ",*(ptr+i));
 }
    
}