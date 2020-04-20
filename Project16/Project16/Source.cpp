#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> myVector1(5, 1);
	//1 число-колво эл в векторе
	//2 число-значение элементов
	//если не проинициал будут равны 0
	vector <int> myVector = {1,8,66,43};
	myVector.push_back(10);
	myVector.push_back(67);
	myVector.push_back(5);

	myVector[1] = 54;

	myVector.pop_back(); //удаляет последний элемент

	myVector.capacity(); //сколько элементов
	                     //может поместиться в векторе

	myVector.shrink_to_fit(); //capacity вектора будет равна количеству элементов,
	// даже если памяти выделено под большее колво элементов

	

	for (int i = 0; i < myVector1.size(); i++)
	{
		cout << myVector1[i] << endl;
	}

	system("pause");
	return 0;
}


