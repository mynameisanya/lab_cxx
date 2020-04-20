#include "Circle.h"

Circle::Circle(int r)
 : r(r)
{}

int Circle::GetR()
{
return r;
}

void Circle::SetR(int r)
{
	this->r = r;
}

double Circle::GetS()
{
	return M_PI*r*r;
}

