//Write a function to rotate an array by n position in d direction. The d is an indicative 
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
// Asignment_15, Que_4
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 22/08/2022

#include <Stdio.h>
void rotate_array(int [],int,int);

int main()
{
int arr[5],n,c;
rotate_array(arr,n,c);
return 0;
}

void rotate_array(int a[],int n1,int c1)
{
int i,j,temp,t=5;

printf("Enter 5 numbers : ");
for ( i = 0; i < t ; i++)
{
 scanf("%d",&a[i]);
}

printf("Enter the n: ");
scanf("%d",&n1);

printf("Enter the d(for  shifting left 1 and for right 0):");
scanf("%d",&c1);

if (c1==1)
{
  for ( j = 0; j < n1; j++)
  {
     temp=a[0];
     for ( i = 0; i < t-1; i++)
     {
      a[i]=a[i+1];
     }
     a[t-1]=temp;
  }
}
else
{
  for ( j = 0; j < n1; j++)
  {
     temp=a[t-1];
     for ( i = t-1; i >= 0; i--)
     {
      a[i]=a[i-1];
     }
     a[0]=temp;
  }
}


for ( i = 0; i <= t-1; i++)
  printf("%d ",a[i]);


//for ( i = d1; i < n; i++)
//{
//   for ( j = 0; j < n-d1; j++)
//   {
//      temp[j]=a[i];
//   }
//   
//}
}






