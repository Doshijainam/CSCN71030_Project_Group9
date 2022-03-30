//CSCN71030 - LAB 3 - GROUP 9
//AFTERMATH OF STACKOVERFLOW
//MEMBERS:
//1.JAINAM DOSHI
//2.JIGNESH PATEL
//3.COLE MACGREGOR

//Hello World Program Testing

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "Parameter.h"
#include "Files.h"
#include "ParameterStructure.h"
#include "ParameterStructure.h"
#include "characteristics.h"
#include "Financials.h"
#include"financialStructure.h"
#include"finanacialsFileData.h"
#define USE_CRT_SECURE_NO_WARNINGS

#define MAX_STRING 100

int main(int argc, char *argv[])
{
	char *n = argv[1];
	double gravity = atoi(n);

	//Check if a file exists, if not make a new file
	if (checkIfFileExists("file.txt")) {
		readOpenFile();
	}

	else {
		writeOpenFile();
	}

	if (fileExists("financial.txt")) {
		readFinancial();
	}
	else {
		writeFinancial();
	}

	 
	
	//char array[4]; 
	
	printf("The mass is %d \n", CalculatingMass()); 
	TypesofRocket(); 
	DeterminingBodymaterials(); 
	double* temp; 
	temp = CalculatingTemperatureMoon();
	//Allocate memory for the structure
	struct parameters *save = (struct parameters*)malloc(sizeof(struct parameters));
	struct financial* set = (struct financial*)malloc(sizeof(struct financial));

	//Function to have rocket launch animation at start
	rocketLaunch();

	//Prints intro menu
	menu();
	
	//Calls function for user to select a planet
	planetSelector();
	
	//Displays salary chart for departments 1,2,3
	displaySalaryChart();

	buildCosts();

	printf("\n ROCKET LAUNCH SUCCESS!\n\n");
}