#pragma once

#define M_PI       3.14159265358979323846

class Circle
{
private:
	int r;
public:
	Circle(int r);
	int GetR();
	virtual void SetR(int r);
	virtual double GetS();
};


