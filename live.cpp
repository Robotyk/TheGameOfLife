#include "live.h"
#include <iostream>
#include "array.h"
void print(char ** tab)
{
	for (int i = 1; i < 21; ++i)
	{
		for (int j = 1; j < 87; ++j)
		{
			std::cout << tab[i][j];
		}
		std::cout << std::endl;
	}
}

char ** simulate(char ** oldTab)
{
	int counter = 0;
	char **tab = create();
	for (int i = 1; i < 21; ++i)
	{
		for (int j = 1; j < 87; ++j)
		{
			counter = 0;
			for (int k = j-1; k <= j+1; ++k)
			{
				for (int l = i-1; l <= i+1; ++l)
				{
					if (k == j && l == i)
						continue;
					if (oldTab[l][k] == '*') 
						counter++;
				}
			}
			if (counter == 3)
				tab[i][j] = '*';
			else if (counter == 2 && oldTab[i][j]=='*')
				tab[i][j] = '*';
			else
				tab[i][j] = ' ';
		}
	}
	for (int i = 0; i < 22; ++i)
	{
		delete[] oldTab[i];
	}
	return tab;
}