#pragma once
#include "TilesFactory.h"
#define xRow 5
#define yGrid 5

class Board
{
private:
	Tiles* array[xRow][yGrid];
	TileFactory tilefactory;
public:
	Board()
	{
		for (int i = 0; i < xRow; i++)
		{
			for (int j = 0; j < yGrid; j++)
			{
				if ((j + 1 + i) % 2 == 0)
				{
					array[i][j] = tilefactory.getTile("ROCKET");
				}
				else {
					array[i][j] = tilefactory.getTile("BOMB");
				}
			}
		}
	}
	void displayBoard()
	{
		for (int i = 0; i < xRow; i++)
		{
			cout << "| ";
			for (int j = 0; j < yGrid; j++)
			{
				if (array[i][j] != NULL)
					array[i][j]->draw();
				cout << " | ";
			}
			cout << endl;
		}
	}
	void use(int x, int y)
	{
		array[x][y]->use();
		array[x][y] = NULL;
	}
};