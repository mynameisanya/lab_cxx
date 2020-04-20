#include "Sphere.h"

Sphere::Sphere(int r) : Circle(r) {}
	 
double Sphere::GetS()
	{
		return 4.0 / 3.0 * GetR()*GetR()*GetR()*M_PI;
	}
