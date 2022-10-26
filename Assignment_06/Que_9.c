// Write a program to calculate LCM of two numbers.
//  Asignment_6, Que_9
//  Topic~ Use any loop
//  Author~ Shree Chandan Samal
//  Date~ 08/08/2022
#include <stdio.h>
int main()
{
    int x, y, i, hcf;
    printf("enter two number for LCM: ");
    scanf("%d%d", &x, &y);
    //(x>y?x:y) <- it will give you the max value
    for (i = x>y?x:y; i <= x*y; i = i + (x>y?x:y))
        if (i % x == 0 && i % y == 0)
            break;

    printf("LCM is %d", i);
    //if you want hcf from lcm then, uncomment the below lines..
    //hcf=(x*y)/i;
    //printf("\nHCF is %d", hcf);
    return 0;
}