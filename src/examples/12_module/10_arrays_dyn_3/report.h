#include<iostream>
//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify
#include "src/examples/12_module/08_arrays_dyn_1/bank_account.h"
//
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport();
private:
	BankAccount** accounts;//pointer to pointer
	const int SIZE{ 5 };
};


MyReport::MyReport()
	///save 5 memory addresses
{
	accounts = new BankAccount*[SIZE];
	std::cout << "Create memory\n";
	//creates dynamic memory(heap) for each of the 5 addresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10);//calls default constructor
	}

}

void MyReport::display() const
{
	std::cout << "process\n";
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport()
{
	std::cout << "free memory\n";
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}

	delete[] accounts;
}



