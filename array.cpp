#include "array.h"
void insert(int x, int y, char ** tab)
{
	tab[y][x] = '*';
	return;
}
char** create()
{
	char **tab = new char *[SIZE_Y];
	for (int i = 0; i < SIZE_Y; ++i)
	{
		tab[i] = new char[SIZE_X];
	}
	for (int i = 0; i < SIZE_Y; ++i)
	{
		for (int j = 0; j < SIZE_X; ++j)
		{
			tab[i][j] = ' ';
		}
	}
	return tab;
}
char at(int x, int y, char ** tab)
{
	if (tab[x][y] == '*')
		return '*';
	else
		return ' ';
}

void del(char ** tab)
{
	for (int i = 0; i < SIZE_Y; ++i)
	{
		delete[] tab[i];
	}
}