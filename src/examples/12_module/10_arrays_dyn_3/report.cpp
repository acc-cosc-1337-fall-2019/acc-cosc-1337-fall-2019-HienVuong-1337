//
#include "report.h"
#include <iostream>

using std::cout;

MyReport::MyReport()
	//:accounts{ new BankAccount*[SIZE] }//save 5 memory addresses	
{
	accounts = new BankAccount*[SIZE];
	cout << "Create memory\n";
	//creates dynamic memory (heap)
	
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10); //calls default constructor
	}
}

void MyReport::display() const
{
	cout << "process\n";
	for (int i = 0; i < SIZE; ++i)
	{
		cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport()
{
	cout << "free memory\n";
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i]; // deletes the pointer
	}

	delete[] accounts;
}
