#include <iostream>

using namespace std;


template <typename T>
class List
{
public:
	List();
	~List();

	void push_back(T data); //добавить элемент в конец списка
	int GetSize() { return Size; }

	T& operator[](const int index);

private:

	template <typename T> //шаблон, нужен, чтобы работать с любыми типами данных
	class Node //узел
	{
	public:
		//пол€
		Node *pNext; //указатель типа node, который называетс€ pointerNext
		T data; //“=тип, data-им€

		Node(T data = T(), Node *pNext = nullptr) //конструктор
		{
			//присваиваем вход€щие параметры
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size; //количество элементов в списке
	Node <T> *head; //голова, первый элемент списка
};

template <typename T>
List<T>::List()
{
	//инициализаци€ переменных
	Size = 0;
	head = nullptr;//пустой список
}

template <typename T>
List<T>::~List()
{
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) //если первый эл пустой
	{
		head = new Node<T>(data); //создаем элемент
	}
	else
	{
		Node<T> *current = this->head;
		while (current->pNext != nullptr) //идем по всем нодам, ищем последний элемент
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}

template<typename T>
T & List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T> *current = this->head;
	while (current!=nullptr)
	{
		if (counter==index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}


int main()
{

	List<int> lst;
	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(22);
	
	cout << lst[2]<<endl;


	int numbersCount;
	cin >> numbersCount;

	for (int i = 0; i < numbersCount; i++)
	{
		lst.push_back(rand() % 10);
	}


	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	system("pause");
	return 0;
}