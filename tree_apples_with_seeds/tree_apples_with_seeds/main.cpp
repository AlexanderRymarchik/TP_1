#include "classes.h"
#include <string>

void main()
{
	setlocale(0,"");
	int n = 0;
	
	do 
	{
		cout << "������� ��������� ���������� �����: ";
		cin >> n;
		if ( n < 0) cout << "�������� �����!\n";
	}
	while (n < 0);

	Tree *tree = new Tree(n);
	string k;

	for(;;) 
	{
	cout << "            ������� �������: 1 - �����, 2 - ������, 3 - �����\n";
	cin >> k;

	if (k == "1")
		tree->Grow();
	else if (k == "2")
		tree->Shake();
	else if (k == "3")
			break;
	else
			cout << "������ �� ���������" << endl;
	}
}