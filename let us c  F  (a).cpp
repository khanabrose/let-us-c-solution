#include<stdio.h>
int main()
{
	float basic_salary,d_allowance,house_rent,gross_salary;
	printf("enter the basic salary");
	scanf("%f",&basic_salary);
	d_allowance=0.4*basic_salary;
	house_rent=0.2*basic_salary;
	gross_salary=basic_salary+d_allowance+house_rent;
	printf("\n basic salary :%f",basic_salary);
	printf("\n dearness allowance:%f",house_rent);
	printf("\n gross salary :%f",gross_salary);
	return 0;
	}

