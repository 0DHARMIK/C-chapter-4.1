#include<iostream>
using namespace std;

class P {
public:
    float temperature;

public:
    void setTemperature(float temp)
	{
        temperature = temp;
    }
};

class Q : public P {
public:
    float toFahrenheit() 
	{
        return (temperature * 9 / 5) + 32;
    }
};

class R : public Q {
public:
    float toKelvin() 
	{
        return (toFahrenheit() - 32) * 5 / 9 + 273.15;
    }
};

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    R a;
    a.setTemperature(celsius);

    cout << "Temperature in Fahrenheit: " << a.toFahrenheit() << " F" << endl;
    cout << "Temperature in Kelvin: " << a.toKelvin() << " K" << endl;

    return 0;
}