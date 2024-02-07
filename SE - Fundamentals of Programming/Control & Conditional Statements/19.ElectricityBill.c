#include <stdio.h>
int main() 
{
    int customerId;
    char customerName[50];
    float unitConsumed, totalAmount, surcharge;

    printf("Enter customer ID: ");
    scanf("%d", &customerId);

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);

    if (unitConsumed <= 350) 
	{
        totalAmount = unitConsumed * 1.20;
    } 
	else if (unitConsumed > 350 && unitConsumed <= 600) 
	{
        totalAmount = unitConsumed * 1.50;
    }
	else if (unitConsumed > 600 && unitConsumed <= 800) 
	{
        totalAmount = unitConsumed * 1.80;
    } 
	else 
	{
        totalAmount = unitConsumed * 2.00;
    }

    if (totalAmount > 800) 
	{
        surcharge = totalAmount * 0.18;
        totalAmount += surcharge;
    }

    if (totalAmount < 256) 
	{
        totalAmount = 256;
    }
    
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %f\n", unitConsumed);
    printf("Total Amount to be Paid: Rs. %f\n", totalAmount);

    return 0;
}

