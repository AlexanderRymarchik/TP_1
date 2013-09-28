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
			cout << "------ ������� �������: 1 - ������, 2 - ������� � ����� �����, 3 - ����� ------\n";
			cin >> k;

			if (k == "1")
				tree->Bloom();
			else if (k == "3")
					return;
			else if (k != "2")
					cout << "������ �� ���������" << endl;
		}
		while (k != "2");

		do
		{
			cout << "-- ������� �������: 1 - �����, 2 - ������, 3 - ������� � ��������, 4 - ����� --\n";
			cin >> l;

			if (l == "1")
				tree->Grow();
			else if (l == "2")
				tree->Shake();
			else if (l == "4")
					return;
			else if (l != "3")
					cout << "������ �� ���������" << endl;
		}
		while (l != "3");
	}
}