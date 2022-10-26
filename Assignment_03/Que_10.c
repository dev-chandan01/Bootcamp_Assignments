/* Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage*/
// Asignment_3, Que_10
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    float c_p,s_p,p,l;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &c_p, &s_p);
    
    if (s_p>c_p)
    {
        p=(s_p-c_p)/c_p*100;
        printf("Uhh!! You got Profited by: %f %%",p);
    }
    else
    { 
        l=(c_p-s_p)/c_p*100;
        printf("Oops You got Lossed by: %f %%",l);
    }
    return 0;
}