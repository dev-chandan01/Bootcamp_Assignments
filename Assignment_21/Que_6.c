//Write a function to sort employees according to their names [refer structure from question 1]
// Asignment_21, Que_6
// Topic~ Structure in C language
// Author~ Shree Chandan Samal
// Date~ 12/09/2022
#include<stdio.h>
#include<string.h>
 //Defining structure
struct Employee input();
void display (struct Employee);
struct Employee
{
    int id;
    char name[20];
    float salary;
};

void sort_salary(struct Employee b[],int size)
{
    int i,j;
    struct Employee temp;
    for ( i = 0; i < 4; i++)
    {
        for ( j = i; j < 5; j++)
        {
           if(strcmp(b[i].name,b[j].name) > 0)
           {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
           }
        }
        
    }
    
}

int main()
{  
    struct Employee b1[5];
    int i;
    for (i = 0; i <= 4; i++)
    b1[i]=input();
    sort_salary(b1,5);
    for (i = 0; i <= 4; i++)
    display(b1[i]);
    return 0;
}

struct Employee input(){
struct Employee b;
printf("Enter Employee I'd: ");
scanf("%d",&b.id);
fflush(stdin);//fflush before string input
printf("Enter Employee name: ");
fgets(b.name,20,stdin);//it also take '\n'
b.name[strlen(b.name)-1]='\0';//for removing '\n' form the string.
printf("Enter salary: ");
scanf("%f",&b.salary);
return b;//return structure
}

void display (struct Employee b){
printf("\nEmployee I'd: %d\nEmployee Name: %s\nEmployee Salary: %f",b.id,b.name,b.salary);
}