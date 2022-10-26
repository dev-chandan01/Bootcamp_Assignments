// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
// Asignment_15, Que_5
// Topic~ Array and function in C language
// Author~ Shree Chandan Samal
// Date~ 23/08/2022

#include <Stdio.h>
int check_adjacent_duplicate(int[]);
int main()
{
    int arr[10];
    printf("Duplicate elements in the array is: %d", check_adjacent_duplicate(arr));
}

int check_adjacent_duplicate(int a[])
{
    int i, j,count=0;
    printf("Enter the numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] == a[j])
            return a[i];
        }
    }
}