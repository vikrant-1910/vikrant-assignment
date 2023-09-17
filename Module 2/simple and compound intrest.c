#include<stdio.h>
void main()
{
	float p,r,t,si,ci;
	printf("Enter the Principal,Rate and Time\n");
	scanf("%f %f %f",&p,&r,&t);
	si=p*r*t/100;
	printf("simple intrest is : %f",si);
	ci=p*(pow((1+r/100),t))-p;
	printf("\nCompound intrest is : %f",ci);
}
