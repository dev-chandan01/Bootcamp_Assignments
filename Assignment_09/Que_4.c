// Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

//   Asignment_9, Que_4
//   Topic~ Switch Case Problem
//   Author~ Shree Chandan Samal
//   Date~ 13/08/2022
#include <stdio.h>
int main()
{
    int a, b, c, choice;
    while (1)
    {
        printf("\n    -||CHECK TRIANGLE||-\n");
        printf("\n1. Isosceles triangle or not\n");
        printf("2. Right angled triangle or not\n");
        printf("3. Equilateral triangle or not\n");
        printf("4.Exit\n");

        printf("\n>Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n>You have chosen: 1. Isosceles triangle or not");
            printf("\n>Enter three side of the triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b || b == c || c == a)
                printf("\nThis is an Isoscale Triangle\n");
            else
                printf("This is not an Isoscale Triangle\n");
            break;
        case 2:
            printf("\n>You have chosen: 2. Right angle triangle or not");
            printf("\n>Enter three side of the triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if (((a * a) + (b * b) == (c * c)) || ((a * a) + (c * c) == (b * b)) || ((b * b) + (c * c) == (a * a)))
                printf("\nThis is an Right angle Triangle\n");
            else
                printf("This is not an Right angle Triangle\n");
            break;
        case 3:
            printf("\n>You have chosen: 3. Equilaterial triangle or not");
            printf("\n>Enter three side of the triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b && b == c && c == a)
                printf("\nThis is an Equilaterial Triangle\n");
            else
                printf("This is not an Equilaterial Triangle\n");
            break;
        case 4:
            printf("Exit..");
            break;
        default:
            printf("choose a valid option\n");
            break;
        }
        if (choice == 4)
            break;

    } // end of while
    return 0;
}
