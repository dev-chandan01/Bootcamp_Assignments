// Draw the shape.
//  *
//  **
//  * *
//  *  *
//  *****  
// Asignment_8, Que_14
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    //i is for number of rows
    for (i = 1; i <= 5; i++)
    {  
        //j is for number of coloumn
        for (j = 1; j <= 5; j++)
        {
            if (j==1||i==j||i==5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
