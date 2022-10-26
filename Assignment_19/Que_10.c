//Create an authentication system. It should be menu driven.
// Asignment_19, Que_10
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 06/09/2022

#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,flag =0;
char username[20],password[20],a[3][2][20]={
    {
        "prateek","123"
    },
    {
        "MySirG","456"
    },
    {
        "Aditya","321"
    }
 };
 
printf("Enter Username:");
 gets(username);
printf("Enter Password:");
 gets(password);
 for ( i = 0; i < 3; i++)
    {
        if ((strcmp(username,a[i][0])==0) && (strcmp(password,a[i][1])==0))
        {
          printf("Login Successfully");
          flag=1;
        }
    } 
    if(flag==0)
    printf("Username or password not matched");
    return 0;
}
