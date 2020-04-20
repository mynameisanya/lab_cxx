#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;


int main()
{
	vector <int> vec(3);
	vec[0] = 1;
	vec[1] = 2;
	vec[2] = 3;
	
	vector <int> vec1 = {1,2,3};


	vector <string> vec2 = { "i","hate","you" };
	vec2.at(1) = "love";


	for (int i = 0; i<vec.size(); i++)
	{
		cout << vec[i]<<" ";
	}
	cout << "\n";

	for (int i = 0; i<vec2.size(); i++)
	{
		cout <<vec2[i]<<" ";
	}

	cout << "\n";
	if (vec == vec1) {cout << "They are equal";}
	else { cout << "They aren't equal"; }

	vector <vector<int>>vec3 = { {1,2,3},{4,5,6} };
	cout << vec2[0];
	


	getchar();
	return 0;
}

