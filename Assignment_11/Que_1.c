// Write a function to calculate LCM of two numbers. (TSRS)
// Asignment_11, Que_1
// Topic~ More on Function in C language
// Author~ Shree Chandan Samal
// Date~ 14/08/2022

#include <stdio.h>
int lcm_fun (int , int);
int main()
{
int a,b,s;
printf("Enter two number for LCM: ");
scanf("%d%d",&a,&b);
s=lcm_fun (a,b);
printf("LCM is %d",s);
return 0;
}

int lcm_fun (int x, int y)
{   
    int i;
    for (i = x>y?x:y; i <= x*y; i = i + (x>y?x:y))
    {  
        if (i % x == 0 && i % y == 0){
            break;
        }
    }   
        
    return i;
}