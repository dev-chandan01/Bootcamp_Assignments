// Draw the shape.
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A    
// Asignment_8, Que_13
// Topic~ Pattern Problem.
// Author~ Shree Chandan Samal
// Date~ 12/08/2022
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 7; i++)
    {  
        k='A';
        for (j = 1; j <= 13; j++)
        {
            if ((j <= 8-i)||(j>= 6+i))
            {
                printf("%c ",k);
                j<7?k++:k--;
            }
            else{
                printf("  ");
                if(j==7)
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}