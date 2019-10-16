//bank_account.cpp
#include "bank_account.h"



BankAccount::BankAccount()
{
	balance = 500;
}


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

BankAccount BankAccount::operator+(const BankAccount & b)
{

	BankAccount account;
	account.balance = balance + b.balance;

	return account;
}


int BankAccount::get_balance() const
{
	return balance;
}


//const does not allow us to modify
void display(const BankAccount & account)
{
	std::cout << "Balance: " << account.balance << "\n";
}


std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";
	
	return out; //cascading call needs to return an object
}


std::istream & operator>>(std::istream & in, BankAccount & b)
{
	int amt;
	std::cout << "\nEnter amount: ";
	in >> amt;

	b.deposit(amt);

	return in;
}

