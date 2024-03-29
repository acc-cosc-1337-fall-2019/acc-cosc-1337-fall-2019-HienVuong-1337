//atm.h
#ifndef ATM_H
#define ATM_H

#include "bank_account.h"

class ATM
{
public:
	ATM(BankAccount a); //contructor accepts BankAccount with parameter a
	//ATM(BankAccount);
	void deposit(int amount);
	void withdraw(int amount);
	void display_balance() const;

private:
	BankAccount account;

};

#endif