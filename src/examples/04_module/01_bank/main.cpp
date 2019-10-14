#include<iostream>
#include<vector>
#include "atm.h"
#include "customer.h"

using std::cout; using std::vector; using std::cin;

int main()
{
	Customer customer;
	customer.add_account(BankAccount(500));
	customer.add_account(BankAccount(1500));
	customer.add_account(BankAccount(5000));
	
	cout << customer;

	return 0;
}