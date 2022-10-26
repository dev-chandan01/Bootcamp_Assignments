// Draw the shape.
// *********
//  *******
//   *****
//    ***
//     *
// Asignment_8, Que_6
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((j >= i)&&(j<= 10-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//(j >= i)||(j >= 10-i)
//(j+1 >= 4+i)