//Write a program to store information of n students and display them using structure
// Asignment_21, Que_9
// Topic~ Structure in C language
// Author~ Shree Chandan Samal
// Date~ 12/09/2022
#include<stdio.h>
#include<string.h>
 //Defining structure
struct Student input();
void display (struct Student);
struct Student
{
    char name[20];
    int roll;
    float fee;
};



int main()
{  
    int size,i;
    printf("Enter the total student: ");
    scanf("%d",&size);
    struct Student b1[size];
    for (i = 0; i <= size-1; i++)
    b1[i]=input();
    for (i = 0; i <= size-1; i++)
    display(b1[i]);
    return 0;
}

struct Student input(){
struct Student b;
fflush(stdin);//fflush before string input
printf("Enter Student name: ");
fgets(b.name,20,stdin);//it also take '\n'
b.name[strlen(b.name)-1]='\0';//for removing '\n' form the string.
printf("Enter Student Roll no: ");
scanf("%d",&b.roll);
printf("Enter fees: ");
scanf("%f",&b.fee);
return b;//return structure
}

void display (struct Student b){
printf("\nStudent Name: %s\nStudent Roll no: %d\nStudent fees: %f",b.name,b.roll,b.fee);
}