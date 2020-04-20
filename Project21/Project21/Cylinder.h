#pragma once
#include "Circle.h"
class Cylinder : public Circle
{
private:
	int h;
public:
	Cylinder(int r, int height);
	double GetS();
};