//Write a function to take input employee data from the user. [ Refer structure from question 1 ].
// Asignment_21, Que_2
// Topic~ Structure in C language
// Author~ Shree Chandan Samal
// Date~ 12/09/2022
#include<stdio.h>
 //Defining structure
struct Employee input();
struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{  
    struct Employee b1;
    b1=input();
    return 0;
}

struct Employee input(){
struct Employee b;
printf("Enter Employee I'd: ");
scanf("%d",&b.id);
fflush(stdin);//fflush before string input
printf("Enter Employee name: ");
fgets(b.name,20,stdin);
b.name[strlen(b.name)-1]='\0';//for removing '\n' form the string.
printf("Enter salary: ");
scanf("%f",&b.salary);
return b;
}
