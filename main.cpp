#include <fstream>
#include <iostream>
#include <windows.h>
#include "live.h"
#include "array.h"
using namespace std;

int main()
{
	int x, y;
	char **tab = create();
	fstream file;
	file.open("dane.txt", ios::in);
	if (file.good()) 
		cout << "File opened successfully" << endl;
	else
	{
		cout << "Error while opening a file" << endl;
		return 0;
	}
	while (!file.eof())
	{
		file >> x >> y;
		insert(x, y, tab);
	}
	file.close();
	Sleep(1000);
	while (1)
	{	
		system("CLS");
		print(tab);
		tab = simulate(tab);
		Sleep(200);
	}
	del(tab);
	system("pause");
	return 0;
}