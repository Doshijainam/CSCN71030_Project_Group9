#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Parameter.h"
#include "Financials.h"
#include "Files.h"
#include "ParameterStructure.h"
#include"finanacialsFileData.h"
#include "financialStructure.h"

#define USE_CRT_SECURE_NO_WARNINGS
#define DEPT1_SALARY 15000
#define DEPT2_SALARY 30000
#define DEPT3_SALARY 50000
#define FUEL_COST_PER_UNIT 1000
#define FUEL_EFFICIENCY 2000000

//Total cost for build
int buildCosts()
{	//Assign memory to store build cost
	long int buildCost;
	//Random build cost
	buildCost = rand() % (400000000 - 200000000 + 1) + 200000000;
	printf("\n Total build cost: $%ld", buildCost);
	return buildCost;
	set->buildcosts = buildCost;
	updateFile();
	return buildCost;
}
//Cost for staff in dep 1
int department1StaffSalary()
{
	int staff,salary;
	printf("\n Number of Employees in Deparment 1:");
	scanf_s("%d", &staff);
	salary = staff * DEPT1_SALARY;
	set[0].salary = salary;
	updateFile();
	return salary;
}
//Cost for staff in dep 2
int department2StaffSalary()
{
	int staff, salary;
	printf("\n Number of Employees in Deparment 2:");
	scanf_s("%d", &staff);
	salary = staff * DEPT2_SALARY;
	set[1].salary = salary;
	updateFile();
	return salary;
}
//Cost for staff in dep 3
int department3StaffSalary()
{
	int staff, salary;
	printf("\n Number of Employees in Deparment 3:");
	scanf_s("%d", &staff);
	salary = staff * DEPT3_SALARY;
	set[2].salary = salary;
	updateFile();
	return salary;
}
//Salary display chart for each department
void displaySalaryChart()
{
	int salary[3] = { 15000,30000,50000 };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("\n Department %d has salary $%d", i + 1, salary[i]);
	}
}

double fuelCosts(int distance)
{
	double fuelcost,total_efficiency;
	total_efficiency = (FUEL_EFFICIENCY * distance) / 1000;
	fuelcost = total_efficiency * FUEL_COST_PER_UNIT;
	set->fuelcosts= fuelcost;
	updateFile();
	return fuelcost;

}

double overallCosts(int dept1,int dept2,int dept3,int buildcosts,double fuelcosts)
{
	double overallcosts = dept1 + dept2 + dept3 + fuelcosts + buildcosts;
	return overallcosts;
}





