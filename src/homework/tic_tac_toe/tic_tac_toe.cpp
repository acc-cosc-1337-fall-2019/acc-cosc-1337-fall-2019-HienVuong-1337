//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() ||
		check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
		return true;
	}
	return false;
}


void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}


void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}


string TicTacToe::get_player() const
{
	return next_player;
}


string TicTacToe::get_winner() const
{
	return winner;
}


void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}


bool TicTacToe::check_column_win()
{
	return false;
}


bool TicTacToe::check_row_win()
{
	return false;
}


bool TicTacToe::check_diagonal_win()
{
	return false;
}


void TicTacToe::clear_board()
{
	for (std::size_t i = 0; i < 9; i++)
	{
		pegs[i] = " ";
	}
}


bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < 9; i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

//modify so function can handle 9 or 16 pegs
//if peg legnth vector is 9 do this loop, if peg length vector is 16 then do a new loop
std::istream & operator>>(std::istream & in, TicTacToe & a)
{
	int position;
	cout << "\nEnter a position from 1 to 9: ";
	in >> position;
	a.mark_board(position);

	return in;
}

//modify so function can handle 9 or 16 pegs
//if peg legnth vector is 9 do this loop, if peg length vector is 16 then do a new loop
std::ostream & operator<<(std::ostream & out, const TicTacToe & a)
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		out << a.pegs[i] << " | " << a.pegs[i + 1] << " | " << a.pegs[i + 2] << "\n";
	}
	return out;
}


void TicTacToe::set_winner()
{
	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}