//h

#ifndef TIC_TAC_TOE_H //header guard
#define TIC_TAC_TOE_H

#include<string>
#include<vector>
#include<iostream>
#include<ostream>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::ostream;


class TicTacToe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend std::istream & operator >> (std::istream & in, TicTacToe & a);
	friend std::ostream & operator << (std::ostream & out, const TicTacToe & a);
	
private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_winner();
	vector<string> pegs{9, " "}; 
	string next_player;
	string winner;
};


#endif