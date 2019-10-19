#include<iostream>
#include "vectors.h"

using std::cout; using std::cin;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector<int> nums{ 8, 4, 20, 88, 66, 99 };
	char choice = 'y';
	int user_choice;

	do 
	{
		cout << "Enter 1 for get max, 2 for get primes: ";
		cin >> user_choice;

		if(user_choice == 1)
		{
			cout << "Max in vector with values 8, 4, 20, 88, 66, 99: " << get_max_from_vector(nums) << "\n";
		}
		else if(user_choice == 2)
		{
			int num;
			cout << "Enter a number: ";
			cin >> num;
			cout << "Primes of " << num << "\n";
			vector<int> result = vector_of_primes(num);

			for(auto n: result)
			{
				cout << n << " ";
			}

			cout << "\n";

		}
		else 
		{
			cout << "incorrect choice \n";
		}

		cout << "continue enter y";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}