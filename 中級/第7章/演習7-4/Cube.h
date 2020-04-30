#pragma once
#include "ThreeDimensional.h"

class Cube:public ThreeDimensional {
private:
	double side;	// •Ó‚Ì’·‚³
	double area;	// –ÊÏ

public:
	/* •Ó‚Ì’·‚³“ü—Í */
	void Inputside(double lenght);
	/* –ÊÏ */
	void Area();
	/* •¶š—ño—Í */
	void Print();
};