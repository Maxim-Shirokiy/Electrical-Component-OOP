#pragma once
#ifndef Component_H
#define COMPONENT_H
#include <iostream>
using namespace std;
class Component
{
protected:
	double value;
public:
	Component();
	Component(double avalue);
	virtual void print() {
		cout << "The resistance is: " << value << endl;
	}
	virtual double getImpedance() {
		return 0;
	};
	
};
#endif
