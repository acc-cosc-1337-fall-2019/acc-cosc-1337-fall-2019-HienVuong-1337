//bank_account.cpp
#include "bank_account.h"

BankAccount::BankAccount()
{
	//normally there would be code to read balance from database but for class example we 
	//are declaring balance here
	balance = 500;
}

//class BankAccount needs to be specified in the function or else it will be a free function
void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount) 
	{
		balance -= amount;
	}
}

int BankAccount::get_balance() const
{
	return balance;
}
