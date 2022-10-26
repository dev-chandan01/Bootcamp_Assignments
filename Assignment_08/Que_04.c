// Draw the shape.
//  *****
//   ****
//    ***
//     **
//      *
// Asignment_8, Que_4
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}