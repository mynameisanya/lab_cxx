#include <iostream>
using namespace std;

class Vec2
{
public:
	float x;
	float y;

	Vec2 (float _x, float _y)
		:x(_x), y(_y)
	{}

	Vec2 operator+(Vec2 const & other)
	{
		return Vec2(this->x + other.x, this->y + other.y);
	}

	Vec2 operator-(Vec2 const & other)
	{
		return Vec2(this->x - other.x, this->y - other.y);
	}

	float operator*(Vec2 const & other)
	{
		Vec2 c = Vec2(this->x * other.x, this->y * other.y);
		return (c.x + c.y);
	}

	Vec2 operator/(float Chis)
	{
		return Vec2(this->x / Chis, this->y / Chis);
	}
};

ostream & operator<<(ostream & out, Vec2 const & Vec)
{
	out << Vec.x << "," << Vec.y;
	return out;
}

istream & operator>>(istream & in, Vec2 & Vec)
{
	in >> Vec.x >> Vec.y;
	return in;
}

int main()
{
	Vec2 a(1, 2);
	Vec2 b(3, 5);
	Vec2 c(-2, -3);
	cout << (a - b) / (c * c) << endl;
	system("pause");
	return 0;
}