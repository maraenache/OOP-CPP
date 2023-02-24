#include <iostream>
#include <string>
using namespace std;
float operator"" _Kelvin(unsigned long long int x)
{ 
    //C = K - 273.15
    float celsius = x-273.15;
    return celsius;
}
float operator"" _Fahrenheit(unsigned long long int x)
{ 
    float celsius = (x-32)*5;
    celsius /= 9;
    return celsius;
}
/*
The temperature conversion is easy to do:
Take the °F temperatureand subtract 32.
Multiply this number by 5.
Divide this number by 9 to obtain your answer in °C.*/

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout << a << '\n' << b;
    return 0;

}