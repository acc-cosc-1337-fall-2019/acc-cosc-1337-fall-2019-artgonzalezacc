#include"tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	char cont = 'y';
	TicTacToe game;
	string player;

	do 
	{
		cout << "Enter X or O";
		cin >> player;

		game.start_game(player);

		while(game.game_over() == false)
		{
			cin >> game;
			cout<<game;
		}
	
		cout << "Game over: ";

		cout << "Play again y";
		cin >> cont;

	} while (cont == 'y' || cont == 'Y');


	return 0;
}