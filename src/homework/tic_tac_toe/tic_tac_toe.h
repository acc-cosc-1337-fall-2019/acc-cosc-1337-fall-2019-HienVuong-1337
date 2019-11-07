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
	TicTacToe() {}; //for now create a blank constructor
	TicTacToe(int size) : pegs(size*size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	const std::vector<std::string>& get_pegs();
	friend std::istream & operator >> (std::istream & in, TicTacToe & a);
	friend std::ostream & operator << (std::ostream & out, const TicTacToe & a);
	
protected:
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;
	vector<string> pegs;

private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	string next_player;
	string winner;
};


#endif