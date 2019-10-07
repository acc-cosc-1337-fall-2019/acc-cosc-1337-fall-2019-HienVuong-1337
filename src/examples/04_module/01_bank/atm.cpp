//atm.cpp

//class composition, class within a class

#include "atm.h"
#include<iostream>

using std::cout;

ATM::ATM(BankAccount a) :account(1000)
//ATM::ATM() : account(1000)
{
	//have a class that gets balance from DB
}

void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}

void ATM::display_balance() const
{
	cout << "Balance: " << account.get_balance();
}
