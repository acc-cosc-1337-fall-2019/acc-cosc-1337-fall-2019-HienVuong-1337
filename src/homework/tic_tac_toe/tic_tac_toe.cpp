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
	for (std::size_t i = 0; i < pegs.size(); i++)
	{
		pegs[i] = " ";
	}
}


bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}



std::istream & operator>>(std::istream & in, TicTacToe & a)
{
	int position;
	cout << "\nEnter a position from 1 to " << a.pegs.size() << ": \n";
	in >> position;
	a.mark_board(position);

	return in;
}


std::ostream & operator<<(std::ostream & out, const TicTacToe & a)
{
	if (a.pegs.size() == 9)
	{
		for (std::size_t i = 0; i < 9; i += 3)
		{
			out << a.pegs[i] << " | " << a.pegs[i + 1] << " | " << a.pegs[i + 2] << "\n";
		}
	}
	else if (a.pegs.size() == 16)
	{
		for (std::size_t i = 0; i < 16; i += 4)
		{
			out << a.pegs[i] << " | " << a.pegs[i + 1] << " | " << a.pegs[i + 2] << "\n";
		}
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


const std::vector<std::string>& TicTacToe::get_pegs()
{
	return pegs;
}