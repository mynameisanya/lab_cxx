#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

// конструктор принимает длины трех сторон, реализовыны фуркции периметра и площади, функция вывода данных класса

class Treugolnik
{
public:
	Treugolnik(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
	{}

	Treugolnik() : x(0), y(0), z(0)
	{}

	float Perim()
	{
		float P = x + y + z;
		return P;
	}

	void Show()
	{
		cout << "Storony: " << x << ", " << y << ", " << z << endl;
		cout << "Perimetr: " << Perim() << endl;
		cout << "Ploshyad: " << Plosh();
	}

	float Plosh()
	{
		float p = Perim() / 2;
		float S = sqrt(p * (p - x) * (p - y) * (p - z));
		return (S);
	}
private:
	float x;
	float y;
	float z;
};

int main()
{
	float a, b, c;
	do
	{
		cout << "Enter x, y and z: ";
		cin >> a >> b >> c;
	} while (((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a));
	Treugolnik Treug_1 = Treugolnik(a, b, c);
	Treug_1.Show();
	_getch();
	return 0;
}