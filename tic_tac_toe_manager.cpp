#include "tic_tac_toe_manager.h"

//cpp
ostream & operator<<(ostream & out, const TicTacToeManager & m)
{
	for (auto& game : m.games)
	{
		out << *game<< "\n";
	}

	out << "X wins: " << m.x_win;
	out << "O wins: " << m.o_win;
	out << "CAT: " << m.ties;
	
	return out;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}
