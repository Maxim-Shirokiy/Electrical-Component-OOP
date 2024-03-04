#pragma once
#ifndef Inductor_H
#include <iostream>
#include "Component.h"
using namespace std;
class Inductor:public Component
{
protected:
	double frequency;
public:
	Inductor();
	Inductor(double avalue, double afreq);
	void print();
	double getImpedance();
};
#endif

