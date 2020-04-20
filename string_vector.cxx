#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <fstream>

class Pair
{
public:
	std::string firstValue;
	int secondValue;

	Pair(std::string _firstValue, int _secondValue)
		:firstValue(_firstValue), secondValue(_secondValue)
	{}

	bool operator<(Pair const & other)
	{
		if (this->secondValue > other.secondValue)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

void Task1()
{
	std::string x, y;
	std::ofstream output("Task1-2_strings.txt");
	std::ifstream input("Task1-2_strings.txt");
	std::cout << std::endl << "Enter 2 strings: ";
	std::cin >> x >> y;
	output << x << " " << y << std::endl;
	output.close();
	input >> x >> y;
	input.close();
	std::cout << "X: " << x << std::endl << "Y: " << y << std::endl;
	int ind = 0, count = 0;
	std::cout << "Y in X: ";
	do
	{
		ind = x.find(y, ind);
		if (ind != std::string::npos)
		{
			std::cout << ind << " ";
			ind++;
			count++;
		}
	} while (ind != std::string::npos);
	if (count == 0)
	{
		std::cout << "'Not found'" << std::endl << std::endl;
	}
	else
	{
		std::cout << std::endl << std::endl;
	}
}

void Task2()
{
	int n;
	std::ofstream output_n("Task2-n.txt");
	std::ifstream input_n("Task2-n.txt");
	std::cout << std::endl << "Enter count of strings: ";
	std::cin >> n;
	output_n << n << std::endl;
	output_n.close();
	input_n >> n;
	input_n.close();
	std::vector<std::string> words;
	for (int i = 0; i < n; ++i)
	{
		std::string word;
		std::ofstream output_word("Task2-word.txt");
		std::ifstream input_word("Task2-word.txt");
		std::cout << "Enter string: ";
		std::cin >> word;
		output_word << word << std::endl;
		output_word.close();
		input_word >> word;
		input_word.close();

		words.push_back(word);
	}
	std::sort(words.begin(), words.end());
	std::cout << std::endl << "Sorted list:" << std::endl << std::endl;
	for (std::vector<std::string>::iterator it = words.begin(); it != words.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << std::endl;
}

void Task3()
{
	std::map<std::string, int> wordsCount;
	std::map<std::string, int>::iterator it;
	while (1)
	{
		std::string word;
		std::ofstream output("Task3-word.txt");
		std::ifstream input("Task3-word.txt");
		std::cout << std::endl << "Enter string: ";
		std::cin >> word;
		output << word << std::endl;
		output.close();
		input >> word;
		input.close();
		wordsCount[word]++;
		for (it = wordsCount.begin(); it != wordsCount.end(); ++it)
		{
			std::cout << "{" << it->first << "; " << it->second << "} ";
		}
		std::cout << std::endl;
	}
}

void Task4()
{
	std::map<std::string, int> wordsCount;
	std::vector<Pair> Pairs;
	std::map<std::string, int>::iterator it1;
	std::vector<Pair>::iterator it2;
	while (1)
	{
		std::string word;
		std::ofstream output("Task4-word.txt");
		std::ifstream input("Task4-word.txt");
		std::cout << "Enter string: ";
		std::cin >> word;
		output << word << std::endl;
		output.close();
		input >> word;
		input.close();
		wordsCount[word]++;
		for (it1 = wordsCount.begin(); it1 != wordsCount.end(); ++it1)
		{
			Pairs.push_back(Pair(it1->first, it1->second));
		}
		std::sort(Pairs.begin(), Pairs.end());
		for (it2 = Pairs.begin(); it2 != Pairs.end(); ++it2)
		{
			std::cout << "{" << it2->firstValue << "; " << it2->secondValue << "} ";
		}
		std::cout << std::endl;
		Pairs.clear();
	}
}

int main()
{
	int taskNumber;
	do
	{
		std::cout << "Enter Task Number: ";
		std::cin >> taskNumber;
		switch (taskNumber)
		{
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 3:
			Task3();
			break;
		case 4:
			Task4();
			break;
		default:
			std::cout << "Wrong Task Number." << std::endl;
		}
	} while (1);
	return 0;
}