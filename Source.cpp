//Source
#include <iostream>
#include "Component.h"
#include "Resistor.h"
#include "Capacitor.h"
#include "Inductor.h"
using namespace std;

int main() {

	Resistor*obj = new Resistor(10);
	Capacitor*obj1 = new Capacitor(0.00001, 1000);
	Inductor* obj2 = new Inductor(0.002, 1000);
	Component* Componentarr[3];
	for (int i = 0; i < 3; i++) {
		if (i == 0)
			Componentarr[i] = obj;

		if (i == 1)
			Componentarr[i] = obj1;

		if (i == 2)
			Componentarr[i] = obj2;

		Componentarr[i]->print();
		cout << "The frequency is: " << Componentarr[i]->getImpedance() <<" hertz"<< endl;
	}
}