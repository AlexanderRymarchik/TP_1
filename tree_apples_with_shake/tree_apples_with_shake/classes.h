#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

unsigned int n = 50;

void fRandom()
	{
		srand((unsigned)time(NULL));
	};

class Apple
{
public:
	Apple() {};
};

class Tree
{
private:
	vector <Apple> apples;
public:
	Tree() { fRandom();};
	Tree(int number)
	{
		fRandom();
		for(int i = 0; i != number; i++)
			apples.push_back(*(new Apple()));
	};

	~Tree()
	{
		apples.clear();
	};

	void Grow()
	{
		unsigned int number = rand()%n+1;

		cout <<"  �������!\n";
		for(int i = 0; i != number; i++)
			apples.push_back(*(new Apple()));
		cout << "  ����� �����: "<< apples.size() << endl; 
	};

	void Shake()
	{
		unsigned int number = rand()%apples.size();

		if (apples.size() == 1)
		{
			cout << "  ������ ������ ������!" << endl;
			return;
		}
		else if (number == 0)
		{
			cout << "  ����� �������!\n";
			return;
		}
		else
		{
			cout << "  �����!\n";
			for(int i = 0; i != number; i++)
				apples.pop_back();
		}
		cout << "  �������� �����: "<< apples.size() << endl;
	};
};