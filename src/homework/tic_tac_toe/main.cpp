#include "tic_tac_toe.h"


int main() 
{
	int menu_option;
	string player;
	int position;

	cout << "Tic Tac Toe Game\n";
	cout << "\nHere are the numbers that corresponds to each position: \n";
	cout << "\n 1 | 2 | 3 \n" << " 4 | 5 | 6 \n" << " 7 | 8 | 9 \n";

	do
	{
		TicTacToe game1;
		cout << "\nFirst player, enter X or O: ";
		cin >> player;
	
		if (player == "X" || player == "x" || player == "O" || player == "o")
		{
			game1.start_game(player);
		}
		else
		{
			cout << "Invalid entry, please enter X or O: \n";
			cin >> player;
		}

		do
		{
			cout << "\nEnter a position from 1 to 9: ";
			cin >> position;
			game1.mark_board(position);
			game1.display_board();

		} while (game1.game_over() == false);

		cout << "Enter 1 to play again, any other key to exit: \n";
		cin >> menu_option;
	
	} while (menu_option == 1);

	return 0;
}