#include <iostream>
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

//реализованы классы окружности цилиндра и сферы, так же имеется интерфейся для них
//использованы get методы для вычисления их обьема(цилидр и сфера) и площади(окружность)

class Measureble
{
	virtual float GetMeasure() = 0;
};

class Okruzhnost : public Measureble
{
public:
	Okruzhnost(float _R = 0) : R(_R)
	{}

	void SetR(float value)
	{
		R = value;
	}

	float GetR()
	{
		return R;
	}

	float GetMeasure() override
	{
		float Ploshad = float(M_PI * R * R);
		return Ploshad;
	}
protected:
	float R;
};

class Sfera : public Okruzhnost, public Measureble
{
public:
	float GetMeasure() override
	{
		float Obyom = float(4.0 / 3.0 * M_PI * R * R * R);
		return Obyom;
	}
};

class Cilindr : public Okruzhnost
{
public:
	Cilindr(float _H = 0) : H(_H)
	{}

	void SetH(float value)
	{
		H = value;
	}

	float GetH()
	{
		return H;
	}

	float GetMeasure() override
	{
		float Obyom = float(M_PI * R * R * H);
		return Obyom;
	}
private:
	float H;
};

int main()
{
	float r, h;

	Okruzhnost Okr_1;
	cout << "Enter R for Okruhzost: ";
	cin >> r;
	Okr_1.SetR(r);
	cout << "R = " << Okr_1.GetR() << endl;
	cout << "Ploshad = " << Okr_1.GetMeasure() << endl << endl;

	Sfera Sf_1;
	cout << "Enter R for Sfera: ";
	cin >> r;
	Sf_1.SetR(r);
	cout << "R = " << Sf_1.GetR() << endl;
	cout << "Obyom = " << Sf_1.GetMeasure() << endl << endl;

	Cilindr Cil_1;
	cout << "Enter R and H for Cilindr: ";
	cin >> r >> h;
	Cil_1.SetR(r);
	Cil_1.SetH(h);
	cout << "R = " << Cil_1.GetR() << endl;
	cout << "H = " << Cil_1.GetH() << endl;
	cout << "Obyom = " << Cil_1.GetMeasure() << endl << endl;
	system("pause");
	return 0;
}