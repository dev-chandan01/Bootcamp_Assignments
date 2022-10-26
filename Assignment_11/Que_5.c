//Write a function to print first N prime numbers (TSRN)
// Asignment_11, Que_5
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
void check_prime_fun (int);
int main()
{
 int y,z;
printf("Enter a number: ");
scanf("%d",&z);
check_prime_fun (z);
return 0;
}

void check_prime_fun (int a)
{
   int x,i,flag=0;
    for (x = 1; x <= a; x++)
    {
        flag = 0;
        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                flag = 1;
        }
        if (flag == 0)
            printf("%d ", x);
    }
 
}
