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

class Flower
{
public:
	Flower() {};
};

class Tree
{
private:
	vector <Apple> apples;
	vector <Flower> flowers;
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
		flowers.clear();
	};

	void Grow()
	{
		if (flowers.size() != 0)
		{
			unsigned int number = rand()%flowers.size();
			if (flowers.size() == 1)
				number = 1;
			if (number == 0)
			{
				cout << "  ������� ����� ������ ������� ��� ����������!" << endl;
				return;
			}
			cout <<"  �������!\n";
			for (int i = 0; i != number; i++)
			{
				apples.push_back(*(new Apple()));
				flowers.pop_back();
			}
			unsigned int seeds = apples.size()*8;
			cout << "  ����� �����: " << apples.size() << endl;
			cout << "  �������� ���������: " << flowers.size() << endl;
			cout << "  ������� � �������: " << seeds << endl;
		}
		else cout << "  ������ ��� �������!" << endl;
	};

	void Shake()
	{
		if (apples.size() != 0)
		{
			unsigned int number = rand()%apples.size();

			if (apples.size() == 1)
			{
				cout << "  ������ ������!" << endl;
				return;
			}
			if (number == 0)
			{
				cout << "  ����� �������!\n";
				return;
			}
			cout << "  �����!\n";
			for (int i = 0; i != number; i++)
				apples.pop_back();
			unsigned int seeds = apples.size()*8;

			cout << "  �������� �����: "<< apples.size() << endl;
			cout << "  �������� ���������: " << flowers.size() << endl;
			cout << "  ������� � �������: " <<  seeds << endl;
		}
		else cout <<"  ������ ������!" << endl;
	};

	void Bloom()
	{
		unsigned int number = rand()%n+1;
		cout << "  �������!\n";
		for (int i = 0; i != number; i++)
			flowers.push_back(*(new Flower()));
		cout << "  ����� ���������: "<< flowers.size() << endl; 
	}
};