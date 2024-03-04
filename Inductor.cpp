#include "Inductor.h"
#include "Component.h"
#include <string>
using namespace std;

Inductor::Inductor() {
	frequency = 0;
}
Inductor::Inductor(double avalue, double afreq):Component(avalue) {
	value = avalue;
	frequency = afreq;
}

void Inductor::print() {
	cout <<"The Inductors Resistance is: " << value<<" henry"<<endl;
}
double Inductor::getImpedance() {
	return frequency;
	cout << "Frequency is: "<<frequency << endl;
}