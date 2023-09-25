#include <stdio.h>
struct employee
{
    char    name[30];
    int     Id;
    float   salary;
};
main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name :");          
	gets(emp.name);
    printf("ID :");            
	scanf("%d",&emp.Id);
    printf("Salary :");        
	scanf("%f",&emp.salary);
    
    printf("\nEntered detail is:");
    printf("\nName: %s",emp.name);
    printf("\nId: %d",emp.Id);
    printf("\nSalary: %f\n",emp.salary);
    return 0;
}

