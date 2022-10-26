/* WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/
//  Asignment_1, Que_4
//  Author~ Shree Chandan Samal
//  Date~ 05/08/2022

#include <stdio.h>
int main()
{
    float A, R, Pi = 3.1415;
    printf("Enter the radius of circle: ");
    scanf("%f", &R);
    //formula for calculating the Area of the circle
    A = Pi * R * R;
    printf("Area of circle is %f having the radius %f\n", A, R);
    return 0;
}