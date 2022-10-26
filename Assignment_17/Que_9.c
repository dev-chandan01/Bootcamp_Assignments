// Write a C program to sort a string array in ascending order.
// Asignment_17, Que_9
// Topic~ String basics in C language
// Author~ Shree Chandan Samal
// Date~ 30/08/2022

#include <stdio.h>
void sort_str(char []);
int main()
{
char a[]="mycomputer"; 
sort_str(a);
return 0;
}

void sort_str(char b[])
{
 int temp,i,j;

 //Brut force sorting...
 for (int i = 0; i < 10; i++)
 {
    for (int j = i+1; j < 11; j++)
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
 for ( i = 0; i < 11; i++)
 {
   printf("%c",b[i]);
 }
 
 
}