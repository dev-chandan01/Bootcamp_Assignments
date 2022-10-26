// Draw the shape.
//         *****     *****
//        *******   *******
//       ********* *********
//       ******MySirG*******
//        *****************
//         ***************
//          *************
//           ***********
//            ********* 
//             *******
//              *****
//               ***
//                *
// Asignment_8, Que_18
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    //i is for number of rows
    for (i = 1; i <= 13; i++)
    {  
        //j is for number of coloumn
        for (j = 1; j <= 19; j++)
        {
            if (j>i-4 && j<=23-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}