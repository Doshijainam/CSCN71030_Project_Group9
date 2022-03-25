#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Files.h"
#include "ParameterStructure.h"

//Open the file for reading to check if the file exists or not
int checkIfFileExists(const char* file) {
	if (fpFile = fopen(file, "r")) {
		fclose(fpFile);
		return 1;
	}
	return 0;
}

void readOpenFile() {
	//Open file for reading
	fpFile = fopen("file.txt", "r");

	int time;
	double distance, momentum, force, acceleration, thrust, velocity;
	char info[100];

	//Scan for contents in file
	for (int i = 0; i < PLANETS; i++) {
		if (fscanf(fpFile, "%Lf %ld %Lf %Lf %Lf %Lf %Lf\n", &distance, &time, &momentum, &force, &acceleration, &thrust, &velocity) == 7);
		save[i].distance = distance;
		save[i].time = time;
		save[i].acceleration = acceleration;
		save[i].force = force;
		save[i].momentum = momentum;
		save[i].thrust = thrust;
		save[i].velocity = velocity;
	}
	if (fscanf(fpFile, "%s", info) == 1);
	strcpy(save[3].info, info);

	//Close file
	fclose(fpFile);
}

void writeOpenFile() {

	//Open file for writing
	fpFile = fopen("file.txt", "w");

	strcpy(save[3].info, "\0");

	//Initialize file
	for (int i = 0; i < PLANETS; i++) {
		save[i].distance = 0;
		save[i].acceleration = 0;
		save[i].force = 0;
		save[i].momentum = 0;
		save[i].thrust = 0;
		save[i].time = 0;
		save[i].velocity = 0;
	}
	//Close file
	fclose(fpFile);
}

void updateFile() {
	//Open file for writing
	fpFile = fopen("file.txt", "w");

	//Update data into file
	for (int i = 0; i < PLANETS; i++) {
		fprintf(fpFile, "%.2Lf %ld %.2Lf %.2Lf %.2Lf %.2Lf %.2Lf\n", save[i].distance, save[i].time, save[i].momentum, save[i].force, save[i].acceleration, save[i].thrust, save[i].velocity);
	}
	fprintf(fpFile, "%s", save[3].info);

	//Close file
	fclose(fpFile);
}
