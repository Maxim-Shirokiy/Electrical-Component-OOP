#pragma once
#ifndef Resistor_H
#include <iostream>
#include "Component.h"
using namespace std;
class Resistor:public Component
{
public:
	Resistor() {};
	Resistor(double avalue);
	void print();
	double getImpedance();
};
#endif


