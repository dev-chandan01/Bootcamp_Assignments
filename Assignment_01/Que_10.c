/*WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022) */
//  Asignment_1, Que_10
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    int DD, MM, YYYY;
    printf("Enter the date as \"DD/MM/YYYY\" format: ");
    scanf("%d/%d/%d", &DD, &MM, &YYYY);
    printf("\"Day - %d , Month - %d , Year - %d\"\n", DD, MM, YYYY);
    return 0;
}