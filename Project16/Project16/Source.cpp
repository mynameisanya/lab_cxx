#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> myVector1(5, 1);
	//1 �����-����� �� � �������
	//2 �����-�������� ���������
	//���� �� ���������� ����� ����� 0
	vector <int> myVector = {1,8,66,43};
	myVector.push_back(10);
	myVector.push_back(67);
	myVector.push_back(5);

	myVector[1] = 54;

	myVector.pop_back(); //������� ��������� �������

	myVector.capacity(); //������� ���������
	                     //����� ����������� � �������

	myVector.shrink_to_fit(); //capacity ������� ����� ����� ���������� ���������,
	// ���� ���� ������ �������� ��� ������� ����� ���������

	

	for (int i = 0; i < myVector1.size(); i++)
	{
		cout << myVector1[i] << endl;
	}

	system("pause");
	return 0;
}


