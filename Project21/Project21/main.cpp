#include <iostream>
#include "Circle.h"
#include "Sphere.h"
#include "Cylinder.h"

using namespace std;
int main()
{
	Circle ci(10);
	Sphere sp(10);
	Cylinder cy();

	cout << ci.GetS();

	system("pause");
	return 0;
}