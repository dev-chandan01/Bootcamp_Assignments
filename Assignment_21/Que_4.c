//Write a function to find the highest salary employee from a given array of 
//10 employees. [ Refer structure from question 1]
// Asignment_21, Que_4
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

void sort_price(struct Employee b[])
{
    int i;
    struct Employee max;
    //for ( r = 1; r <= size-1; r++)
    //{
    //    for ( i = 0; i <= size-1-r; i++)
    //    {
    //       if(b[i].salary > b[i+1].salary)
    //       {
    //        temp=b[i];
    //        b[i]=b[i+1];
    //        b[i+1]=temp;
    //       }
    //    }
    //    
    //}
     max=b[0];
    for (i = 0; i <= 9 ; i++)
    {
       if (max.salary < b[i].salary)
        {
          max=b[i];
        }
      }
    display(max);
}

int main()
{  
    struct Employee b1[10];
    int i;
    for (i = 0; i <= 4; i++)
    b1[i]=input();
    sort_price(b1);
    //display(b1[i]);
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
