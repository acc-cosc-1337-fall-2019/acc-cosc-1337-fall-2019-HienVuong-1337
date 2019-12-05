//
#include "report.h"
#include<iostream>

using std::cout;

Report::Report()
{
	//creates dynamic memory (heap)
	accounts = new BankAccount[SIZE]; //calls default constructor
}

void Report::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << accounts[i].get_balance() << "\n";
	}
}

Report::~Report()
{
	delete[] accounts;
}
