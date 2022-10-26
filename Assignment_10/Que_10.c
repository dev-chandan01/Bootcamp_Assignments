// Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
// Asignment_10, Que_10
// Topic~ Function in C language
// Author~ Shree Chandan Samal
// Date~ 13/08/2022

#include <stdio.h>
void prime_fact(int );
int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   prime_fact(num);
   return 0;
}

void prime_fact(int n)
{
for (int i = 2; n != 1 ; i++)
{
    while (n%i==0)
    {
        n = n/i;
        printf("%d,",i);
    }
    
}

}