
#pragma once
#ifndef Capacitor_H
#include <iostream>
#include "Component.h"
using namespace std;
class Capacitor:public Component
{
protected:
	double frequency;
public:
	Capacitor();
	Capacitor(double avalue, double afreq);
	double getfreq()const { return frequency; }
	void print();
	double getImpedance() { return frequency; }
};
#endif
