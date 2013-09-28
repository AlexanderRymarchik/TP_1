#include "classes.h"
#include <string>

void main()
{
	setlocale(0,"");
	int n = 0;

	Tree *tree = new Tree(n);
	string k,l;

	for (;;)
	{
		do
		{
			cout << "------ Введите команду: 1 - цвести, 2 - перейти к росту яблок, 3 - выход ------\n";
			cin >> k;

			if (k == "1")
				tree->Bloom();
			else if (k == "3")
					return;
			else if (k != "2")
					cout << "Ничего не произошло" << endl;
		}
		while (k != "2");

		do
		{
			cout << "-- Введите команду: 1 - расти, 2 - трясти, 3 - перейти к цветению, 4 - выход --\n";
			cin >> l;

			if (l == "1")
				tree->Grow();
			else if (l == "2")
				tree->Shake();
			else if (l == "4")
					return;
			else if (l != "3")
					cout << "Ничего не произошло" << endl;
		}
		while (l != "3");
	}
}