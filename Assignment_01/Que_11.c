/*WAP to take time as an input in below given format and convert the time format and 
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute” */
//  Asignment_1, Que_11
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
   int HH,MM;
    printf("Enter the date as \"HH:MM\" format: ");
    scanf("%d:%d", &HH, &MM);
    printf("\"%d Hour and %d Minute\"\n",HH,MM);
    return 0;
}
