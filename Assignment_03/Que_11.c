/*Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.*/
// Asignment_3, Que_11
// Topic~ Decision Control Statements
// Author~ Shree Chandan Samal
// Date~ 06/08/2022

#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    printf("Put your 5 subjects mark as (s1:s2s3:s4:s5) [Mandetory- put ':' in between every subject] : \n");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    
    if ((s1>=33)&&(s2>=33)&&(s3>=33)&&(s4>=33)&&(s5>=33))
        printf("Pass");
    else
       printf("Fail");
    return 0;
}
