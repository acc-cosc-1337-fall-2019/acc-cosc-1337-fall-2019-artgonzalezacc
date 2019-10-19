#include<string>
#include<vector>

using std::string; using std::vector;

#include<iostream>

using std::ostream; using std::istream;

//h
/*
Represents one game of tic tac toe.
*/
class TicTacToe 
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	friend ostream& operator<<(ostream& out, const TicTacToe& t);
	friend istream& operator>>(istream& in, TicTacToe& t);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{ 9, " " };//initializer
	string next_player;
};