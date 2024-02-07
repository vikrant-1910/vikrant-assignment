#include <stdio.h>
int main() 
{
    float unitCharges, totalBill;

    printf("Enter electricity unit charges: ");
    scanf("%f", &unitCharges);

    if (unitCharges <= 50) 
	{
        totalBill = unitCharges * 0.50;
    }
	else if (unitCharges > 50 && unitCharges <= 150) 
	{
        totalBill = 50 * 0.50 + (unitCharges - 50) * 0.75;
    } 
	else if (unitCharges > 150 && unitCharges <= 250) 
	{
        totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
    } 
	else 
	{
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
    }

    totalBill += totalBill * 0.20;

    printf("Total Electricity Bill: Rs. %f\n", totalBill);

    return 0;
}

