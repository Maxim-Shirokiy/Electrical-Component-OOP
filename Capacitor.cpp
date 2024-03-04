#include "Capacitor.h"
#include "Component.h"
#include <string>
using namespace std;

Capacitor::Capacitor(double avalue, double afreq):Component(avalue) {
	value = avalue;
	frequency = afreq;
}

void Capacitor::print() {
	cout << "The Capacitors Resistance is:" <<value<<" Farads"<<endl;
}
//double Capacitor::getImpedance() {
//	return frequency;
//}
