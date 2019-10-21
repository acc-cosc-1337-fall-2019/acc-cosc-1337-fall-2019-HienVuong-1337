//bank_account.h
#include<iostream>

//header guards to prevent class redefinition error
#ifndef BANK_ACCOUNT_H 
#define BANK_ACCOUNT_H


class BankAccount
{
public:
	BankAccount(); //constructor  
	BankAccount(int b) : balance(b) {}; //inline constructor
	virtual int get_balance() const;
	void deposit(int amount);
	void withdraw(int amount);

	friend void display(const BankAccount& account); 
	friend std::ostream & operator << (std::ostream & out, const BankAccount & b);
	friend std::istream & operator >> (std::istream & in, BankAccount & b);
	BankAccount operator+(const BankAccount & b);

protected:

	int balance;
	
};

#endif 

