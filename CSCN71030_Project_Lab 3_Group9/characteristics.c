#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Files.h"
#include "ParameterStructure.h"
#include "Parameter.h"
#include "Financials.h"
// #define Temperature_Sun 5000 
// #define Temperature_Moon 200 
// #define Temperature_Mars -170

#define MAX 1000 

	


struct Characteristics {
	 
	int mass; 

	char body[MAX];

	char TypeofRocket[MAX]; 
	double  Temperature[MAX]; 

	
}characteristics;
struct Characteristics characteristics;

 int  CalculatingMass() {
	struct Characteristics characteristics; 
	srand(time(NULL)); 

	characteristics.mass = rand() % (600 - 500 + 1) + 500; 
	// Maximum mass of spacecraft  is 600 and minimum is 500  
	
	 

	return characteristics.mass; 


}

 char * TypesofRocket() {
	 

	 printf("Enter the type of rocket you want \n It can be in  either Solid or in liquid state \n"); 
	 char Type[MAX] = "\0";


		 scanf_s("%s", Type,MAX); 
		 strcpy(characteristics.TypeofRocket, Type); 
	 

	
		 printf("The type of Rocket is %s \n",characteristics.TypeofRocket); 

	 
	 return characteristics.TypeofRocket; 



 }

 char* DeterminingBodymaterials() {

	 printf("Enter the material you want to use for the spacecraft  \n");
	 char Material[MAX] = "\0";


	 scanf_s("%s", Material, MAX);
	 strcpy(characteristics.body, Material);



	 printf("The material that we are going to use  is %s \n", characteristics.body);


	 return characteristics.body;



 
	
		 


	  
	 
 }

	 




double * CalculatingTemperatureMoon(  ) {

	const int Destination = 3; 
	//double temperature; 

	for (int i = 0; i < Destination; ++i) {
		for (int j = 0; j <3; ++j) {
			printf("Destination %d , Day %d\n", i + 1, j + 1); 
			printf("Enter the temperature \n"); 
			scanf_s("%lf", &characteristics.Temperature[i]);

			if (characteristics.Temperature[i] > 200 || characteristics.Temperature < 500) {
				printf("Temperature at Destination %d is %lf", i + 1, characteristics.Temperature[i]);
			}
			else
				return 0; 

		}
	}
	return characteristics.Temperature;


}