#include<iostream>
#include<vector>
#include<atm.h>
#include "bank_account.h"

using std::cout;
using std::cin;
using std::vector;

int main()
{
	BankAccount a;
	BankAccount b = a;
	//a.get_balance;
	display(a); //class friend function

	//scan card and enter pin
	//get customer record from DB into a vector
	vector<BankAccount> accounts{ (500),BankAccount(600), 
		BankAccount(1000) };

	for (auto act : accounts)
	{
		cout << act;
	}

	//BankAccount account(9000); //created bank account to pass account to ATM
	//ATM atm(account);
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a; //overload operator

	return 0;
}