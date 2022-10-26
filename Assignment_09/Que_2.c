// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit.

//  Asignment_9, Que_2
//  Topic~ Switch Case Problem
//  Author~ Shree Chandan Samal
//  Date~ 13/08/2022
#include <stdio.h>
int main()
{
    int a, b, c, z;
while (1)
{
    printf("\n-||Calculator||-\n");
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
    printf("\n>Enter your choice: ");
    scanf("%d", &z);
    switch (z)
    {
        case 1:
            printf("\n>You have chosen: 1. Addition");
            printf("\n>Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("\n>Addition is: %d\n", c = a + b);
            break;
        case 2:
            printf("\n>You have chosen: 2. Subtraction");
            printf("\n>Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("\n>Subtraction is: %d\n", c = a - b);
            break;
        case 3:
            printf("\n>You have chosen: 3. Multiplication");
            printf("\n>Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("\n>Multiplication is: %d\n", c = a * b);
            break;
        case 4:
            printf("\n>You have chosen: 4. Division");
            printf("\n>Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("\n>Division is: %d\n", c = a / b);
            break;
        case 5:
            printf("\nExit....");
            break;
        default:
            printf("\n>Invalid Choice\n");
            break;
        }
        if(z==5)
        break;
    }//end of while
    return 0;
}