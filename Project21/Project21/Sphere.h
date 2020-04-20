#pragma once
#include "Circle.h"
class Sphere :public Circle
{
public:
	Sphere(int r);
	virtual double GetS();
};