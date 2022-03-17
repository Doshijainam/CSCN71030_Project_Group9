#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Parameter.h"

#define MAX_STRING 100
#define MASS 415000

//Intro menu
void menu() {
	printf("\n\tWelcome to SpaceWare!\n\n To begin please choose from the list of planets below\n\n");
	printf(" Moon\n Sun\n Mars\n\n");
}

//Distance Parameter, user chooses from 8 set destinations
double distance(int destination) {
	double distance = 0;
	switch (destination) {
		//Moon
	case 1:
		distance = 384400;
		printf("\n You have chosen the moon!\n Its just a short trip of ");
		break;
		//Sun
	case 2:
		distance = 148750000;
		printf("\n You have chosen the Sun!\n It's fairly warm there.\n It's ");
		break;
		//Mars
	case 3:
		distance = 286820000;
		printf("\n You have chosen Mars!\n I hope you find some alien life.\n It's ");
		break;
	default:
		EXIT_FAILURE;
	}
	return distance;
}

void planetSelector() {

	char planet[MAX_STRING];

	//Planet is used for when an incorrect input is entered so the user may re-enter a destination
	select:
	printf(" Planet: ");
	scanf_s("%s", &planet, MAX_STRING);

	//Null terminate string
	planet - 1;
	int choice;

	//Dereference NULL pointer
	if (planet != "\0") {
		//If user inputted string is Moon then give the distance to the Moon
		if (strcmp(planet, "Moon") == 0) {
			choice = 1;
			printf("%.2lf", distance(choice));
			printf(" kilometers!\n\n");
			moonTime();
			moonThrust();
		}
		//If user inputted string is Sun then give the distance to the Sun
		else if (strcmp(planet, "Sun") == 0) {
			choice = 2;
			printf("%.2lf", distance(choice));
			printf(" kilometers from earth!\n You're gonna be here a while...\n\n");
			sunTime();
			sunThrust();
		}
		//If user inputted string is Mars then give the distance to the Mars
		else if (strcmp(planet, "Mars") == 0) {
			choice = 3;
			printf("%.2lf", distance(choice));
			printf(" kilometers from earth!\n You'll spend the rest of your life waiting...\n\n");
			marsTime();
			marsThrust();
		}
		//If input is incorrect go back to entering a planet
		else {
			printf(" Incorrect Input please input correct planet name.\n\n");
			goto select;
		}
	}
}

int moonTime() {
	int iRand;
	srand(time(NULL));
	iRand = rand() % (230 - 60 + 1) + 60;  //  for moon 
	printf("The time  for moon is %d\n", iRand);
	return iRand;
}
int sunTime() {
	int sRand;
	sRand = rand() % (610 - 400 + 1) + 400;
	// for sun it would take 606 hours 
	printf("The time for sun is %d\n", sRand);
	return sRand;
}
int marsTime() {
	int rRand;
	rRand = rand() % (5100 - 5000 + 1) + 5000;
	printf("The time for mars  is %d\n", rRand);
	return rRand;
}

//Thrust for moon = mass / time
double moonThrust() {
	double thrust = MASS / moonTime();
	printf(" Rocket thrust will be %.2lf.\n\n", thrust);
	return thrust;
}
//Thrust for sun = mass / time
double sunThrust() {
	double thrust = MASS / sunTime();
	printf(" Rocket thrust will be %.2lf.\n\n", thrust);
	return thrust;
}
//Thrust for mars = mass / time
double marsThrust() {
	double thrust = MASS / marsTime();
	printf(" Rocket thrust will be %.2lf.\n\n", thrust);
	return thrust;
}