#include "classes.h"
#include <string>

void main()
{
	setlocale(0,"");
	int n = 0;
	
	do 
	{
		cout << "Введите начальное количество яблок: ";
		cin >> n;
		if ( n < 0) cout << "Неверное число!\n";
	}
	while (n < 0);

	Tree *tree = new Tree(n);
	string k;

	for(;;) 
	{
	cout << "            Введите команду: 1 - расти, 2 - трясти, 3 - выход\n";
	cin >> k;

	if (k == "1")
		tree->Grow();
	else if (k == "2")
		tree->Shake();
	else if (k == "3")
			break;
	else
			cout << "Ничего не произошло" << endl;
	}
}