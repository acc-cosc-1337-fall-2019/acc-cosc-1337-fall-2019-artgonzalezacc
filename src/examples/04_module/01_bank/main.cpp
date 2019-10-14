#include<iostream>
#include<vector>
#include "atm.h"

using std::cout; using std::vector; using std::cin;

int main()
{
	BankAccount a;
	BankAccount b = a;
	display(a);//class friend function
	//scan card and enter pin
	//get customer records from db into a vector
	vector<BankAccount> accounts{BankAccount(500), BankAccount(600),
	BankAccount(1000)};

	for (auto act : accounts) 
	{
		cout << act;
	}

	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a;// overload operator

	return 0;
}