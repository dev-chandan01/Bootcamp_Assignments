// Write a function to compare two strings.
// Asignment_18, Que_3
// Topic~ String and functions in C language
// Author~ Shree Chandan Samal
// Date~ 31/08/2022

//error
#include<stdio.h>
#include<string.h>
int string_cmp(char[],char[]);
int main()
{
char a[20],b[20];
printf("%d",string_cmp(a,b));
return 0; 
}


int string_cmp(char str1[],char str2[])
{
  printf("Enter string 1(max<20)");
  fgets(str1,20,stdin);
  printf("Enter string 2(max<20)");
  fgets(str2,20,stdin);
  int i,j,flag=0;
  for ( i = 0; str1[i]!=0; i++)
  {
    for ( j = 0; str2[j]!=0; j++)
    {
       if(str1[i]==str2[j])
        flag++;
       //else
        
       
    }
    
  }
  if(flag == strlen(str1 && str2))
  printf("1");
  return 1;
}




