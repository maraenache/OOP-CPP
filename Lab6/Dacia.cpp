#include "Car.h"
#include "Dacia.h"
#include "Weather.h"
#include <string>
using namespace std;

Dacia::Dacia() {
	fuelCapacity = 80;
	fuelConsumption = 2;
	averageSpeed[Rain] = 35;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 30;
	name = (char*)"Dacia";
}

float Dacia::GoCar(bool& b, int w, int circuitLength) {
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Dacia::getName() {
	return name;
}