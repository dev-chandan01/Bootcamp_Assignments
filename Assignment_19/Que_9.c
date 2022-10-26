// Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed.
// Asignment_19, Que_9
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 06/09/2022

#include<stdio.h>
#include<string.h>
int fact_num (int);
int main()

{
    char words[5][20]={"rahul","manish","ajaya","rajib","chandan"};
    char new_word[20];
    printf("Enter your name: ");
    scanf("%s",&new_word);
    int i,a,b,flag=0;
    for ( i = 0; i < 5; i++)
    {
        if (strcmp(words[i],new_word)==0){
        printf("Permission Granted!!,Enter a number for factorial:");
        scanf("%d",&a);
        printf("Square of %d is %d",a,fact_num(a));
        flag=1;
       } 
    }
    if(flag==0)
    printf("Permission Denied");
    return 0;
}

int fact_num (int x)
{
    int f=1;
   for (int i = 1; (i <= x); i++)
    {
        f = f * i;
    }
    return f;
}
