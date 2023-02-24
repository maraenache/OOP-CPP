#pragma once
#ifndef CARH
#define CARH

class Car
{
protected:

	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];
	char* name;
public:
	virtual float Start(bool&, int, int) = 0;
	virtual char* getName() = 0;
};

#endif