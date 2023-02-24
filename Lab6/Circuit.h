#pragma once
#include "Dacia.h"
#include "Renault.h"
#include "Toyota.h"
#include "Ford.h"
#include <string>
using namespace std;

class Circuit {
private:
	int circuitLength;

	Car* car[10];
	float timeToFinish[10];
	bool finish[10];

	int cars;
	int weather;
public:
	Circuit();

	void SetLength(int);
	void SetWeather(int);

	void AddCar(Car* c);

	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};