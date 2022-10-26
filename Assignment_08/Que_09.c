// Draw the shape.
// 1234321
//  12321
//   121
//    1
// Asignment_8, Que_9
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {   
        k=1;
        for (j = 1; j <= 7; j++)
        {
            if ((j >= i)&&(j <= 8-i))
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}