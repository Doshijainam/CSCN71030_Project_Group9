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
	
	//Allocate memory for the structure
	struct parameters *save = (struct parameters*)malloc(sizeof(struct parameters));
	struct financial* set = (struct financial*)malloc(sizeof(struct financial));

	//Function to have rocket launch animation at start
	rocketLaunch();

	//Determines mass of rocket
	printf("The mass of the rocket is: %d \n\n", CalculatingMass());

	//User inputs type of rocket
	TypesofRocket();
	
	//User inputs rocket material
	DeterminingBodymaterials();

	//User inputs temperaures at different planets
	
	 
	
	
	printf("The mass is %d \n", CalculatingMass()); 
	TypesofRocket(); 
	DeterminingBodymaterials(); 
	double *  temp; 
	temp = CalculatingTemperatureMoon();

	//Prints intro menu
	menu();
	
	//Calls function for user to select a planet
	planetSelector();
	
	//Displays salary chart for departments 1,2,3
	displaySalaryChart();

	//Displays build costs
	buildCosts();

	printf("\n\n ROCKET LAUNCH SUCCESS!\n\n");
}