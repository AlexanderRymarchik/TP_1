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
				cout << "  Яблокам нужно больше времени для созревания!" << endl;
				return;
			}
			cout <<"  Выросли!\n";
			for (int i = 0; i != number; i++)
			{
				apples.push_back(*(new Apple()));
				flowers.pop_back();
			}
			unsigned int seeds = apples.size()*8;
			cout << "  Стало яблок: " << apples.size() << endl;
			cout << "  Осталось цветочков: " << flowers.size() << endl;
			cout << "  Семечек в яблоках: " << seeds << endl;
		}
		else cout << "  Дерево без цветков!" << endl;
	};

	void Shake()
	{
		if (apples.size() != 0)
		{
			unsigned int number = rand()%apples.size();

			if (apples.size() == 1)
			{
				cout << "  Нечему падать!" << endl;
				return;
			}
			if (number == 0)
			{
				cout << "  Тряси сильнее!\n";
				return;
			}
			cout << "  Упали!\n";
			for (int i = 0; i != number; i++)
				apples.pop_back();
			unsigned int seeds = apples.size()*8;

			cout << "  Осталось яблок: "<< apples.size() << endl;
			cout << "  Осталось цветочков: " << flowers.size() << endl;
			cout << "  Семечек в яблоках: " <<  seeds << endl;
		}
		else cout <<"  Нечему падать!" << endl;
	};

	void Bloom()
	{
		unsigned int number = rand()%n+1;
		cout << "  Зацвели!\n";
		for (int i = 0; i != number; i++)
			flowers.push_back(*(new Flower()));
		cout << "  Стало цветочков: "<< flowers.size() << endl; 
	}
};