#include "Board.h"

int main()
{
	int x, y;
	Board board;
	char option = 'y';

	board.displayBoard();

	while (option != 'n')
	{
		cout << endl << "Use Tile on Coordinate : ";

		cout << endl << "Tiles X: "; 
		cin >> x;
		
		cout << "Tiles Y: "; 
		cin >> y;

		board.use(x, y);
		cout << endl;
		board.displayBoard();
		cout << endl;

		cout << "Lanjut? "; 
		cin >> option;
	}
}