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

#define MAX_STRING 100

int main()
{
	int jumpControlAtBottom = 0;
	const int someDelay = 10000;
	int shifControl = 0;

	// string to display Rocket
	const char rocket[] =
		"           ^ \n\
          /^\\\n\
          |-|\n\
          |S|\n\
          |P|\n\
          |C|\n\
          |W|\n\
          |R|\n\
         /|E|\\\n\
        / | | \\\n\
       |  | |  |\n\
        `-\"\"\"-`\n\
";


	//jump to bottom of console
	for (jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom)
	{
		printf("\n");
	}
	//Print rocket
	fputs(rocket, stdout);
	for (shifControl = 0; shifControl < 30; ++shifControl)
	{
		// Rocket move on the basis of delay
		delay(someDelay);

		// move rocket a line upward
		printf("\n");
	}

	//Variable definitions
	char planet[MAX_STRING];
	int choice;

	//Prints intro menu
	menu();
	
	//Planet is used for when an incorrect input is entered so the user may re-enter a destination
	planet:
	printf(" Planet: ");
	scanf_s("%s", &planet, MAX_STRING);

	//Null terminate string
	planet - 1;
	if (planet != "\0") {
		//If user inputted string is Moon then give the distance to the Moon
		if (strcmp(planet, "Moon") == 0) {
			choice = 1;
			printf("%.2lf", distance(choice));
			printf(" kilometers!\n\n");
		}
		//If user inputted string is Sun then give the distance to the Sun
		else if (strcmp(planet, "Sun") == 0) {
			choice = 2;
			printf("%.2lf", distance(choice));
			printf(" kilometers from earth!\n You're gonna be here a while...\n\n");
		}
		//If user inputted string is Mars then give the distance to the Mars
		else if (strcmp(planet, "Mars") == 0) {
			choice = 3;
			printf("%.2lf", distance(choice));
			printf(" kilometers from earth!\n You'll spend the rest of your life waiting...\n\n");
		}
		//If input is incorrect go back to entering a planet
		else {
			printf(" Incorrect Input please input correct planet name.\n\n");
			goto planet;
		}
	}
}

//Intro menu
void menu() {
	printf("\n\tWelcome to SpaceWare!\n\n To begin please choose from the list of planets below\n\n");
	printf(" Moon\n Sun\n Mars\n\n");
}