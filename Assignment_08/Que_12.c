// Draw the shape.
// ABCDCBA
//  ABCBA
//   ABA
//    A
// Asignment_8, Que_12
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {   
        k='A';
        for (j = 1; j <= 7; j++)
        {
            if ((j >= i)&&(j <= 8-i))
            {
                printf("%c ",k);
                j<4?k++:k--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}