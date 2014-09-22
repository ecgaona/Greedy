/* Greedy.c by Eduardo Carr-Gaona
This program calculates the least
amount of coins needed for a cashier
to give a customer */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    double amount;
    do 
        {
            printf("Please enter the amount of change to be given:\n");
            amount = GetDouble();
        }
    while (amount < 0);
    
    if (amount != 0)
        {
            double round(double amount);        /* compensates for imprecision */
            double cents = (amount * 100);      /* converts dollars to cents for easier calculation */
            int change = cents;
            int quarters = (change / 25);
            int quartRemain = (change % 25);    /* % = modulus -- calculates the remainder after division */
            int dimes = (quartRemain / 10);
            int dimeRemain = (quartRemain % 10);
            int nickels = (dimeRemain / 5);
            int nickelRemain = (dimeRemain % 5);
            int pennies = (nickelRemain / 1);
            int totalCoins = (quarters + dimes + nickels + pennies);
            printf ("%d\n", totalCoins);
        }
}
