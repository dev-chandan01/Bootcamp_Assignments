//Write a function to print all Prime numbers between two given numbers. (TSRN)
// Asignment_11, Que_6
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
void check_prime_fun (int,int);
int main()
{
 int y,z;
printf("Enter two number: ");
scanf("%d%d",&y,&z);
check_prime_fun (y,z);
return 0;
}

void check_prime_fun (int a,int b)
{
   int x,i,flag=0;
   for (x = a; x <= b; x++)
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
