#include "Car.h"
#include "Renault.h"
#include "Weather.h"
#include <string>
using namespace std;

Renault::Renault()
{
	name = (char*)"Renault";
	fuelCapacity = 55;
	fuelConsumption = 67;
	averageSpeed[Rain] = 80;
	averageSpeed[Sunny] = 90;
	averageSpeed[Snow] = 40;

}

float Renault::Start(bool& b, int w, int circuitLength)
{
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Renault::getName()
{
	return name;
}