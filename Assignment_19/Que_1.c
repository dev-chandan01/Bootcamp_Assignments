// Write a program to find the number of vowels in each of the 5 strings stored in two 
// dimensional arrays, taken from the user.
// Asignment_19, Que_1
// Topic~ Handling multiple String in C language
// Author~ Shree Chandan Samal
// Date~ 02/09/2022

#include <stdio.h>
int main()
{
    char a[5][20];
   
    int i,j,vowel=0;
    printf("Enter 5 strings: ");
    for ( i = 0;i < 5; i ++)
    {
    //fgets(a[i],30,stdin);will print the output in next line,so i use gets..[although gets is not convinent]
    gets(a[i]);
    }
    for ( i = 0;i < 5; i ++)
    { 
        for ( j = 0;a[i][j] != '\0'; j ++)
        {
        if(a[i][j] == 'a'||a[i][j] == 'e'||a[i][j] == 'i'||a[i][j] == 'o'||a[i][j] == 'u')
        vowel++;
        }
    printf("%s = %d\n",a[i],vowel);
    vowel = 0;
    }
    return 0;
}
