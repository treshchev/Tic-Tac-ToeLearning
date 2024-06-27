//Copyright Vladislav Treshchev. All rights had been reserved
// Program Tic-Tac-Toe Board
// Describes some actions with multidimensional arrays

#include <iostream>
int main()
{
	const int ROWS = 3;
	const int COLUMS = 3;

	char board[ROWS][COLUMS] = { {'O', 'X', 'O'},
		{' ', 'X', 'X'},
		{'X', 'O', 'O'} };

	std::cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMS; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "\n'X' moves to the empty location.\n\n";
	board[1][0] = 'X';
	std::cout << "Now the tic-tac-toe board is:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMS; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "\n'X' wins!!!";
	return 0;
}