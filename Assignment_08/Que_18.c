// Draw the shape.
//         *
//        ***
//       *****
//      *******
//     ********* 
//      *******
//       *****
//        ***
//         *
// Asignment_8, Que_18
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    //i is for number of rows
    for (i = 1; i <= 9; i++)
    {  
        //j is for number of coloumn
        for (j = 1; j <= 9; j++)
        {
            if (j>=6-i && j<=4+i && j>=i-4 && j<=14-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}