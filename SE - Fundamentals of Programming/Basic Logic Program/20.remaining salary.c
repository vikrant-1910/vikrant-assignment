#include<stdio.h>
main()
{
	int salary,pre,loan,RemainingSalary;
	
	printf("Enter the Salary :");
	scanf("%d",&salary);
	
	pre=salary*10/100;
	
	printf(" \n Enter the Salary after insurance Premium is :%d ",pre);
	
	loan=salary*10/100;
	
	printf("\n Enter the Salary after Loan Installment is :%d ",loan);
	
	RemainingSalary = salary-pre-loan;
	
	printf("\n Remainig salary is:%d",RemainingSalary);
}
