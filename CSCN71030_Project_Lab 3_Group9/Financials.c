#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Parameter.h"
#include "Financials.h"
#define USE_CRT_SECURE_NO_WARNINGS
#define DEPT1_SALARY 15000
#define DEPT2_SALARY 30000
#define DEPT3_SALARY 50000
#define FUEL_COST_PER_UNIT 1000
#define FUEL_EFFICIENCY 2000000
double buildCosts()
{
	double *buildCost = malloc(sizeof(double));
	buildCost = rand() % (400000000 - 200000000 + 1) + 200000000;
	return *buildCost;
}

int department1StaffSalary()
{
	int staff,salary;
	printf("\nNumber of Employees in Deparment 1:");
	scanf_s("%d", &staff);
	salary = staff * DEPT1_SALARY;
	return salary;
}

int department2StaffSalary()
{
	int staff, salary;
	printf("\nNumber of Employees in Deparment 2:");
	scanf_s("%d", &staff);
	salary = staff * DEPT2_SALARY;
	return salary;
}

int department3StaffSalary()
{
	int staff, salary;
	printf("\nNumber of Employees in Deparment 3:");
	scanf_s("%d", &staff);
	salary = staff * DEPT3_SALARY;
	return salary;
}

int displaySalaryChart()
{
	int salary[3] = { 15000,30000,50000 };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		printf("\nDepartment %d has salary $%d", i + 1, salary[i]);
	}
}

double fuelCosts(int distance)
{
	double fuelcost,total_efficiency;
	total_efficiency = (FUEL_EFFICIENCY * distance) / 1000;
	fuelcost = total_efficiency * FUEL_COST_PER_UNIT;
	return fuelcost;
}





