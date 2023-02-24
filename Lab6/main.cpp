#include <iostream>
#include <string>
#include "Car.h"
#include "Weather.h"
#include "Circuit.h"
#include <string>
using namespace std;

int main() {

    Circuit c;
    c.SetLength(120);
    c.SetWeather(Weather::Sunny);
    c.AddCar(new Dacia());
    c.AddCar(new Toyota());
    c.AddCar(new Renault());
    c.AddCar(new Ford());
    c.Race();
    c.ShowFinalRanks();
    c.ShowWhoDidNotFinish();

    return 0;

}