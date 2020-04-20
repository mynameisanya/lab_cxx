#include "Cylinder.h"

Cylinder::Cylinder(int r, int height) : Circle(r), h(height)
{}

double Cylinder::GetS()
{
	return Circle::GetS()*h;
}
