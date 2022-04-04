#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Files.h"
#include "ParameterStructure.h"
#include"finanacialsFileData.h"
#include"financialStructure.h"

int fileExists(const char* file)
{
	if(fpFinancial = fopen(file, "r")) {
		fclose(fpFinancial);
		return 1;
	}
	return 0;
}

void readFinancial() {
	//Open file for reading
	fpFinancial = fopen("financial.txt", "r");

	int staff,salary,buildcosts;
	double fuelcosts;

	//Scan for contents in file
	for (int i = 0; i < DATA; i++)
	{

		if (fscanf(fpFinancial, "%d %d %d %f", &staff, &salary, &buildcosts, &fuelcosts) == 4)
		set[i].staff = staff;
		set[i].buildcosts = buildcosts;
		set[i].fuelcosts = fuelcosts;
		set[i].salary = salary;

	}
	//Close file
	fclose(fpFinancial);
}

void writeFinancial() {
	//Open file for writing
	fpFinancial = fopen("financial.txt", "w");
	//Initialize file
	for (int i = 0; i < DATA; i++) {
		set[i].staff = 0;
		set[i].buildcosts = 0;
		set[i].fuelcosts = 0;
		set[i].salary = 0;

		//Close file
		fclose(fpFinancial);
	}
}

void updateFinancial() {
	//Open file for writing
	fpFinancial = fopen("financial.txt", "w");
	//Update data into file
	/*fprintf(fpFinancial, "Staff : %d", set[0].staff);
	fprintf(fpFinancial, "Build Costs:: %d", set[1].buildcosts);
	fprintf(fpFinancial, "Fuel Costs:: %f", set[2].fuelcosts);
	fprintf(fpFinancial, "Salary Costs:: %d", set[3].salary);*/
		for (int i = 0; i < DATA; i++) {
			fprintf(fpFinancial, "%d %f %d %d \n", set[i].buildcosts, set[i].fuelcosts, set[i].salary, set[i].staff);
		}
		//Close file
	fclose(fpFinancial);
};