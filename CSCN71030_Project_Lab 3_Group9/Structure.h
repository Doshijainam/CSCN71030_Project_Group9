#pragma once
#define PLANETS 3
#define MAX 100

struct parameters {
	long double distance;
	long int time;
	long double thrust;
	long double velocity;
	long double acceleration;
	long double momentum;
	long double force;
	long int salary;
	long int staff;
};

struct parameters save[PLANETS];