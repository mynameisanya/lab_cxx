#include <iostream>
using namespace std;

class rectangle
{
private:
	int x, y, p, s;
public:
	rectangle() {};

	void perimetr()
	{
		p = (x + y) * 2;
		cout << "�������� = " << p << endl;
	}

	void square()
	{
		s = x * y;
		cout << "������� = " << s << endl;
	}

	rectangle(int x, int y);
	/*{
		this->x = x;
		this->y = y;
		//x = valueX;
		//y = valueY;
	}*/
	void Print()
	{
		cout << "����� 1 ������� = " << x << "\n����� 2 ������� = " << y << endl;
	}
};

rectangle::rectangle(int x, int y)
{
	this->x = x;
	this->y = y;
}



int main()
{
	setlocale(LC_ALL, "rus");
	rectangle length(4, 10);
	length.Print();
	length.perimetr();
	length.square();
	system("pause");
	return 0;
}