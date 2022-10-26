// Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 150 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

//   Asignment_9, Que_7
//   Topic~ Switch Case Problem
//   Author~ Shree Chandan Samal
//   Date~ 13/08/2022
#include <stdio.h>
int main()
{
    float unit, i_bill = 0, t_bill = 0;
    printf("\n --||ELECTRIC BILL||--\n");
    printf("\nEnter the Unit: ");
    scanf("%f", &unit);
    switch (unit <= 50)
    {
    case 1:
        i_bill = unit * 0.5;
        break;
    case 0:
        switch (unit <= 150)
        {
        case 1:
            i_bill = 25 + (unit - 50) * 0.75;
            break;
        case 0:
            switch (unit <= 250)
            {
            case 1:
                i_bill = 100 + (unit - 150) * 1.20;
                break;
            case 0:
                i_bill = 220 + (unit - 250) * 1.5;
                break;
            }
            break;
        }
        break;
    }
    printf("Amount:         %f\n",i_bill);
    t_bill = i_bill + i_bill * 0.20;
    printf("surcharge:      +20%%\n");
    printf("----------------------------\n");
    printf("Total Amount:   %f\n",t_bill);

    return 0;
}
