#include "Resistor.h"
#include "Component.h"
#include <string>
using namespace std;

Resistor::Resistor(double avalue):Component(avalue) {
	value = avalue;
}

void Resistor::print() {
	cout << "The Resistors Resistance is: " << value <<" ohm"<< endl;
}
double Resistor::getImpedance() {
	return value;
}