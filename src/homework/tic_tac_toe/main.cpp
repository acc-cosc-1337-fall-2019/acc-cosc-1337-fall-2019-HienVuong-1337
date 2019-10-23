#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


int main() 
{
	char continue_game = 'y';
	TicTacToeManager manager;
	string player;
	int position;

	cout << "Tic Tac Toe Game!\n";
	cout << "\nPosition numbers: \n";
	cout << "\n 1 | 2 | 3 \n" << " 4 | 5 | 6 \n" << " 7 | 8 | 9 \n";

	do
	{
		TicTacToe game;

		cout << "\nEnter X or O: ";
		cin >> player;
	
		if (player == "X" || player == "x" || player == "O" || player == "o")
		{
			game.start_game(player);
		}
		else
		{
			cout << "Invalid entry, please enter X or O: \n";
			cin >> player;
		}

		do
		{
			cin >> game;
			cout << game;

		} while (game.game_over() == false);
		
		manager.save_game(game);

		cout << "Game over: \n";

		cout << "Enter y to play again: \n";
		cin >> continue_game;
	
	} while (continue_game == 'y' || continue_game == 'Y');

	cout << "History: \n";
	cout << manager;

	return 0;
}