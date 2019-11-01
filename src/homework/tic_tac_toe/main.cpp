#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"


int main() 
{
	//TicTacToe3 three;

	char continue_game = 'y';
	TicTacToeManager manager;
	string player;
	int position;
	int game_type;

	cout << "Let's play Tic Tac Toe!\n";

	//cout << "\nPosition numbers: \n";
	//cout << "\n 1 | 2 | 3 \n" << " 4 | 5 | 6 \n" << " 7 | 8 | 9 \n";

	do
	{
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		TicTacToe* game; //point to an instance of TicTacToe

		if (game_type == 3)
		{
			game = new TicTacToe3(); //creating dynamic memory
		}
		else
		{
			game = new TicTacToe4();
		}

		cout << "\nEnter X or O: ";
		cin >> player;
	
		if (player == "X" || player == "x" || player == "O" || player == "o")
		{
			game->start_game(player);
		}
		else
		{
			cout << "Invalid entry, please enter X or O: \n";
			cin >> player;
		}

		do
		{
			cin >> *game;
			cout << *game; //if * isn't placed here it will just display the address

		} while (game->game_over() == false);
		
		manager.save_game(*game);

		cout << "Game over: \n";

		cout << "Enter y to play again: \n";
		cin >> continue_game;
	
	} while (continue_game == 'y' || continue_game == 'Y');

	cout << "History: \n";
	cout << manager;

	return 0;
}