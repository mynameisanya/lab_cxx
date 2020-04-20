#include <iostream>
#define M_PI       3.14159265358979323846
using namespace std;

class Circle
{
private:
	int r;
public:
	
	Circle(int r)
		: r(r)
	{}

	int GetR()
	{
		return r;
	}

	virtual void SetR(int r)
	{
		this->r = r;
	}
	virtual double GetS()
	{
		return M_PI*r*r;
	}
};

class Sphere:public Circle
{
public:
	Sphere(int r) : Circle(r) {}
	virtual double GetS()
	{
		return 4.0/3.0 * GetR()*GetR()*GetR()*M_PI;
	}
};

class Cylinder:public Circle
{
private:
	int h;
public:

	Cylinder(int r, int height) : Circle(r), h(height)
	{}

	double GetS()
	{
		return Circle::GetS()*h;
	}
};


int main()
{
	Circle ci(10);
	Sphere sp(10);
	Cylinder cy();


	system("pause");
	return 0;
}