#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Parameter.h"

#define MAX_STRING 100

   //Giving some delay
void delay(unsigned int value)
{
  unsigned int count1 = 0;
  unsigned int count2 = 0;
  for (count1 = 0; count1 < value; count1++)
   {
    for (count2 = 0; count2 < count1; count2++)
    {
    }
  }
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