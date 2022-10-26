// Write a function to find the next prime number of a given number. (TSRS)
// Asignment_11, Que_4
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
int prime_fun (int);
int main()
{
 int z,s;
printf("Enter a number: ");
scanf("%d",&z);
s=prime_fun (z);
printf("%d",s);
return 0;
}

int prime_fun (int a)
{
   int flag=0;
   for (int x = a+1; 1; x++)
    {   
        flag = 0;
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            return x;
            break;
        }
    }
 
}
